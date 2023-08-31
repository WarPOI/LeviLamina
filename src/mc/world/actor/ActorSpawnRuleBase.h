#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorSpawnRuleBase {

public:
    std::unordered_map<std::string, int> mSpawnDelayStartMap; // this+0x8

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?getRootKey\@ActorSpawnRuleGroup\@\@MEAAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getRootKey() = 0;
    /**
     * @vftbl 2
     * @symbol
     * ?getFileType\@ActorSpawnRuleGroup\@\@MEAAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getFileType() = 0;
    /**
     * @vftbl 3
     * @symbol
     * ?processPopulationControl\@ActorSpawnRuleGroup\@\@MEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVValue\@Json\@\@\@Z
     */
    virtual bool processPopulationControl(std::string const&, class Json::Value&) = 0;
    /**
     * @vftbl 4
     * @symbol
     * ?readResourceFiles\@ActorSpawnRuleGroup\@\@MEAAXAEAVResourcePackManager\@\@AEAV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorSpawnRuleDefinition\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorSpawnRuleDefinition\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual void
    readResourceFiles(class ResourcePackManager&, std::unordered_map<std::string, struct ActorSpawnRuleDefinition>&) = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORSPAWNRULEBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorSpawnRuleBase();
#endif
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_applySpawnCondition\@ActorSpawnRuleBase\@\@IEAAXV?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HAEAVBiomeFilterGroup\@\@AEAVMobSpawnRules\@\@AEBVSemVersion\@\@\@Z\@std\@\@AEAVValue\@Json\@\@AEBVMobSpawnRules\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVSemVersion\@\@\@Z
     */
    MCAPI void
    _applySpawnCondition(std::function<void(std::string const&, int32_t, class BiomeFilterGroup&, class MobSpawnRules&, class SemVersion const&)>, class Json::Value&, class MobSpawnRules const&, std::string const&, class SemVersion const&);
    /**
     * @symbol
     * ?_getResources\@ActorSpawnRuleBase\@\@IEAAXAEAVResourcePackManager\@\@AEBVMobSpawnRules\@\@V?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HAEAVBiomeFilterGroup\@\@AEAVMobSpawnRules\@\@AEBVSemVersion\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void
    _getResources(class ResourcePackManager&, class MobSpawnRules const&, std::function<void(std::string const&, int32_t, class BiomeFilterGroup&, class MobSpawnRules&, class SemVersion const&)>);
    /**
     * @symbol
     * ?_readJsonHeader\@ActorSpawnRuleBase\@\@IEAA_N$$QEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorSpawnRuleDefinition\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorSpawnRuleDefinition\@\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI bool _readJsonHeader(std::string&&, std::unordered_map<std::string, struct ActorSpawnRuleDefinition>&);
    // NOLINTEND
};
