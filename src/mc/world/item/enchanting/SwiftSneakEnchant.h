#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class SwiftSneakEnchant : public ::Enchant {

public:
    // prevent constructor by default
    SwiftSneakEnchant& operator=(SwiftSneakEnchant const&) = delete;
    SwiftSneakEnchant(SwiftSneakEnchant const&)            = delete;
    SwiftSneakEnchant()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?getMinCost\@SwiftSneakEnchant\@\@UEBAHH\@Z
     */
    virtual int32_t getMinCost(int32_t) const;
    /**
     * @vftbl 3
     * @symbol ?getMaxCost\@SwiftSneakEnchant\@\@UEBAHH\@Z
     */
    virtual int32_t getMaxCost(int32_t) const;
    /**
     * @vftbl 5
     * @symbol ?getMaxLevel\@SwiftSneakEnchant\@\@UEBAHXZ
     */
    virtual int32_t getMaxLevel() const;
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SWIFTSNEAKENCHANT
    /**
     * @symbol ?isDiscoverable\@SwiftSneakEnchant\@\@UEBA_NXZ
     */
    MCVAPI bool isDiscoverable() const;
    /**
     * @symbol ?isTreasureOnly\@SwiftSneakEnchant\@\@UEBA_NXZ
     */
    MCVAPI bool isTreasureOnly() const;
#endif
    /**
     * @symbol
     * ??0SwiftSneakEnchant\@\@QEAA\@W4Type\@Enchant\@\@W4Frequency\@2\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@2HH\@Z
     */
    MCAPI SwiftSneakEnchant(
        enum class Enchant::Type,
        enum class Enchant::Frequency,
        std::string_view,
        std::string_view,
        int32_t,
        int32_t
    );
    /**
     * @symbol ?getExtraSneakingMovementFactor\@SwiftSneakEnchant\@\@SAMAEBVActor\@\@\@Z
     */
    MCAPI static float getExtraSneakingMovementFactor(class Actor const&);
    /**
     * @symbol ?getLevel\@SwiftSneakEnchant\@\@SAHAEBVActor\@\@\@Z
     */
    MCAPI static int32_t getLevel(class Actor const&);
    // NOLINTEND
};
