#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal {

class BasicSaver {

public:
    // prevent constructor by default
    BasicSaver& operator=(BasicSaver const&) = delete;
    BasicSaver(BasicSaver const&)            = delete;
    BasicSaver()                             = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREAL_BASICSAVER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BasicSaver();
#endif
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?saveImpl\@BasicSaver\@cereal\@\@AEAA_NAEAUSchemaWriter\@2\@Umeta_handle\@entt\@\@AEBVBasicSchema\@internal\@2\@\@Z
     */
    MCAPI bool saveImpl(struct cereal::SchemaWriter&, entt::meta_handle, class cereal::internal::BasicSchema const&);
    // NOLINTEND
};

}; // namespace cereal
