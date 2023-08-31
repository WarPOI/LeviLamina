#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/Constraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
// clang-format on

namespace cereal {

class StringConstraint : public ::cereal::Constraint {

public:
    // prevent constructor by default
    StringConstraint& operator=(StringConstraint const&) = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol ?doValidate\@StringConstraint\@cereal\@\@EEBA_NAEBVmeta_any\@entt\@\@AEAVSerializerContext\@2\@\@Z
     */
    virtual bool doValidate(class entt::meta_any const&, class cereal::SerializerContext&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREAL_STRINGCONSTRAINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~StringConstraint();
#endif
    /**
     * @symbol ??0StringConstraint\@cereal\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI StringConstraint(class cereal::StringConstraint const&);
    /**
     * @symbol ??0StringConstraint\@cereal\@\@QEAA\@XZ
     */
    MCAPI StringConstraint();
    /**
     * @symbol ??0StringConstraint\@cereal\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI StringConstraint(class cereal::StringConstraint&&);
    /**
     * @symbol ?maxSize\@StringConstraint\@cereal\@\@QEAAAEAV12\@_K\@Z
     */
    MCAPI class cereal::StringConstraint& maxSize(uint64_t);
    /**
     * @symbol
     * ?regex\@StringConstraint\@cereal\@\@QEAAAEAV12\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class cereal::StringConstraint& regex(std::string);
    /**
     * @symbol ?rejectEmpty\@StringConstraint\@cereal\@\@QEAAAEAV12\@XZ
     */
    MCAPI class cereal::StringConstraint& rejectEmpty();
    // NOLINTEND
};

}; // namespace cereal
