#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/POIType.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"

class MingleGoal : public ::MoveToPOIGoal {

public:
    // prevent constructor by default
    MingleGoal& operator=(MingleGoal const&) = delete;
    MingleGoal(MingleGoal const&)            = delete;
    MingleGoal()                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@MingleGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@MingleGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@MingleGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@MingleGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@MingleGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@MingleGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0MingleGoal\@\@QEAA\@AEAVMob\@\@MMMUActorDefinitionIdentifier\@\@M\@Z
     */
    MCAPI MingleGoal(class Mob&, float, float, float, struct ActorDefinitionIdentifier, float);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_findNewPartner\@MingleGoal\@\@AEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void _findNewPartner(struct ActorUniqueID);
    /**
     * @symbol ?_getMingleComponent\@MingleGoal\@\@AEBAAEAVMingleComponent\@\@XZ
     */
    MCAPI class MingleComponent& _getMingleComponent() const;
    /**
     * @symbol ?_isWithinInteractRange\@MingleGoal\@\@AEBA_NAEAVActor\@\@\@Z
     */
    MCAPI bool _isWithinInteractRange(class Actor&) const;
    /**
     * @symbol ?_tryGetMingleComponent\@MingleGoal\@\@CAPEAVMingleComponent\@\@AEAVActor\@\@\@Z
     */
    MCAPI static class MingleComponent* _tryGetMingleComponent(class Actor&);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?FIND_PARTNER_INTERVAL_TICKS\@MingleGoal\@\@0HB
     */
    MCAPI static int32_t const FIND_PARTNER_INTERVAL_TICKS;
    /**
     * @symbol ?SPEAK_INTERVAL_TICKS_MAX\@MingleGoal\@\@0HB
     */
    MCAPI static int32_t const SPEAK_INTERVAL_TICKS_MAX;
    /**
     * @symbol ?SPEAK_INTERVAL_TICKS_MIN\@MingleGoal\@\@0HB
     */
    MCAPI static int32_t const SPEAK_INTERVAL_TICKS_MIN;
    // NOLINTEND
};
