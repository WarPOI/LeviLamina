#include "ll/core/mod/NativeModManager.h"

#include <cstddef>
#include <filesystem>
#include <memory>
#include <ostream>
#include <sstream>
#include <string>
#include <string_view>
#include <utility>

#include "fmt/core.h"
#include "pl/dependency/DependencyWalker.h"

#include "ll/api/i18n/I18n.h"
#include "ll/api/mod/Manifest.h"
#include "ll/api/mod/Mod.h"
#include "ll/api/mod/ModManager.h"
#include "ll/api/mod/NativeMod.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/SystemUtils.h"
#include "ll/core/LeviLamina.h"

#include "windows.h"

namespace ll::mod {
using namespace i18n_literals;

NativeModManager::NativeModManager() : ModManager(NativeModManagerName) {
    handleMap[sys_utils::getCurrentModuleHandle()] = NativeMod::current();
}
NativeModManager::~NativeModManager() = default;

static std::shared_ptr<NativeMod> currentLoadingMod;

std::shared_ptr<NativeMod> NativeModManager::getModByHandle(Handle handle) {
    auto l(lock());
    if (currentLoadingMod) { // for getCurrent before main
        return currentLoadingMod;
    }
    if (handleMap.contains(handle)) {
        return handleMap.at(handle);
    }
    return {};
}
static void
formatDependencyError(pl::dependency_walker::DependencyIssueItem const& item, std::ostream& stream, size_t depth = 0) {
    std::string indent(depth * 3 + 3, ' ');
    if (item.mContainsError) {
        stream << indent << "module: "_tr() << string_utils::u8str2str(item.mPath.filename().u8string()) << '\n';
        if (!item.mMissingModule.empty()) {
            stream << indent << "missing module:"_tr() << '\n';
            for (const auto& missingModule : item.mMissingModule) {
                stream << indent << "|- " << missingModule << '\n';
            }
        }
        if (!item.mMissingProcedure.empty()) {
            stream << indent << "missing procedure:"_tr() << '\n';
            for (const auto& [module, missingProcedure] : item.mMissingProcedure) {
                stream << indent << "|- " << module << '\n';
                for (const auto& procedure : missingProcedure) {
                    stream << indent << "|---- " << memory::demangleSymbol(procedure) << '\n';
                }
            }
        }
        if (!item.mDependencies.empty()) {
            for (auto const& [module, subItem] : item.mDependencies) {
                formatDependencyError(*subItem, stream, depth + 1);
            }
        }
    }
}

static std::string diagnosticDependency(std::filesystem::path const& path) {
    auto              result = pl::dependency_walker::pl_diagnostic_dependency_new(path);
    std::stringstream stream;
    stream << "Dependency diagnostic:"_tr() << '\n';
    formatDependencyError(*result, stream);
    return stream.str();
}

Expected<> NativeModManager::load(Manifest manifest) {
    auto l(lock());
    currentLoadingMod = std::make_shared<NativeMod>(std::move(manifest));
    struct Remover {
        ~Remover() { currentLoadingMod = nullptr; };
    } r;

    auto modDir =
        std::filesystem::canonical(getModsRoot() / string_utils::sv2u8sv(currentLoadingMod->getManifest().name));

    if (auto res = sys_utils::adaptFixedSizeToAllocatedResult(
            [](wchar_t* value, size_t valueLength, size_t& valueLengthNeededWithNul) -> bool {
                ::SetLastError(ERROR_SUCCESS);
                valueLengthNeededWithNul = ::GetEnvironmentVariableW(L"PATH", value, static_cast<DWORD>(valueLength));
                if (valueLengthNeededWithNul == 0 && ::GetLastError() != ERROR_SUCCESS) {
                    return false;
                }
                if (valueLengthNeededWithNul < valueLength) {
                    valueLengthNeededWithNul++; // It fit, account for the null.
                }
                return true;
            }
        );
        res) {
        if (!res->empty()) {
            *res += L";";
        }
        *res += modDir.wstring();
        SetEnvironmentVariableW(L"PATH", res->c_str());
    }
    auto entry = modDir / string_utils::sv2u8sv(currentLoadingMod->getManifest().entry);
    if (auto e = currentLoadingMod->getDynamicLibrary().load(entry); e) {
        Expected<> error{makeExceptionError(std::make_exception_ptr(e))};
        if (e->code().value() == 126 || e->code().value() == 127) {
            error.error().join(makeStringError(diagnosticDependency(entry)));
        }
        return error;
    }
    auto& lib = currentLoadingMod->getDynamicLibrary();
    if (!lib.getAddress("ll_memory_operator_overrided")) {
        using namespace i18n_literals;
        return makeStringError(
            "{0} will not be loaded because it isn't using the unified memory allocation operator"_tr(
                currentLoadingMod->getManifest().name
            )
        );
    }
    // TODO: remove in release
    if (auto addr = lib.getAddress<Mod::callback_t*>("ll_plugin_load"); addr) {
        currentLoadingMod->onLoad(addr);
        currentLoadingMod->onUnload(lib.getAddress<Mod::callback_t*>("ll_plugin_unload"));
        currentLoadingMod->onEnable(lib.getAddress<Mod::callback_t*>("ll_plugin_enable"));
        currentLoadingMod->onDisable(lib.getAddress<Mod::callback_t*>("ll_plugin_disable"));
    } else {
        currentLoadingMod->onLoad(lib.getAddress<Mod::callback_t*>("ll_mod_load"));
        currentLoadingMod->onUnload(lib.getAddress<Mod::callback_t*>("ll_mod_unload"));
        currentLoadingMod->onEnable(lib.getAddress<Mod::callback_t*>("ll_mod_enable"));
        currentLoadingMod->onDisable(lib.getAddress<Mod::callback_t*>("ll_mod_disable"));
    }
    return currentLoadingMod->onLoad().transform([&, this] {
        addMod(currentLoadingMod->getManifest().name, currentLoadingMod);
        handleMap[lib.handle()] = currentLoadingMod;
    });
}

Expected<> NativeModManager::unload(std::string_view name) {
    auto l(lock());
    auto ptr = std::static_pointer_cast<NativeMod>(getMod(name));
    if (!ptr->hasOnUnload()) {
        return makeStringError("The mod does not register an unload function"_tr());
    }
    if (auto res = ptr->onDisable().and_then([&] { return ptr->onUnload(); }); !res) {
        return res;
    }
    if (auto err = ptr->getDynamicLibrary().free(); err) {
        return makeExceptionError(std::make_exception_ptr(*err));
    }
    handleMap.erase(ptr->getHandle());
    eraseMod(name);
    return {};
}
} // namespace ll::mod
