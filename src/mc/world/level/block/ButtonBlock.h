#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ButtonBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ButtonBlock& operator=(ButtonBlock const&);
    ButtonBlock(ButtonBlock const&);
    ButtonBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ButtonBlock();

    // vIndex: 6, symbol:
    // ?getCollisionShape@ButtonBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol:
    // ?addAABBs@ButtonBlock@@UEBAXAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
    virtual void
    addAABBs(class Block const&, class BlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&)
        const;

    // vIndex: 10, symbol:
    // ?getOutline@ButtonBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 12, symbol: ?getVisualShape@ButtonBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 13, symbol: ?getUIShape@ButtonBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getUIShape(class Block const&, class AABB&) const;

    // vIndex: 22, symbol: __unk_vfn_22
    virtual void __unk_vfn_22();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 32, symbol: __unk_vfn_32
    virtual void __unk_vfn_32();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 38, symbol: __unk_vfn_38
    virtual void __unk_vfn_38();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 40, symbol: __unk_vfn_40
    virtual void __unk_vfn_40();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 43, symbol: __unk_vfn_43
    virtual void __unk_vfn_43();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 46, symbol: __unk_vfn_46
    virtual void __unk_vfn_46();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 49, symbol: __unk_vfn_49
    virtual void __unk_vfn_49();

    // vIndex: 50, symbol: __unk_vfn_50
    virtual void __unk_vfn_50();

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 53, symbol: ?isSignalSource@ButtonBlock@@UEBA_NXZ
    virtual bool isSignalSource() const;

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 65, symbol:
    // ?shouldConnectToRedstone@ButtonBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@W4Type@Direction@@@Z
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 70, symbol: ?checkIsPathable@ButtonBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 80, symbol: ?setupRedstoneComponent@ButtonBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 92, symbol: ?mayPlace@ButtonBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool mayPlace(class BlockSource&, class BlockPos const&, uchar) const;

    // vIndex: 93, symbol: ?mayPlace@ButtonBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 100, symbol: ?neighborChanged@ButtonBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 106, symbol: __unk_vfn_106
    virtual void __unk_vfn_106();

    // vIndex: 107, symbol: ?getPlacementBlock@ButtonBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, uchar, class Vec3 const&, int) const;

    // vIndex: 109, symbol: ?isAttachedTo@ButtonBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAV3@@Z
    virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;

    // vIndex: 122, symbol: __unk_vfn_122
    virtual void __unk_vfn_122();

    // vIndex: 123, symbol: __unk_vfn_123
    virtual void __unk_vfn_123();

    // vIndex: 124, symbol: __unk_vfn_124
    virtual void __unk_vfn_124();

    // vIndex: 127, symbol: __unk_vfn_127
    virtual void __unk_vfn_127();

    // vIndex: 130, symbol: __unk_vfn_130
    virtual void __unk_vfn_130();

    // vIndex: 142, symbol: ?getVariant@ButtonBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const&) const;

    // vIndex: 143, symbol: ?canSpawnOn@ButtonBlock@@UEBA_NPEAVActor@@@Z
    virtual bool canSpawnOn(class Actor*) const;

    // vIndex: 153, symbol: __unk_vfn_153
    virtual void __unk_vfn_153();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: __unk_vfn_163
    virtual void __unk_vfn_163();

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 165, symbol: ?onPlace@ButtonBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: ?tick@ButtonBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 171, symbol: __unk_vfn_171
    virtual void __unk_vfn_171();

    // vIndex: 173, symbol: ?use@ButtonBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 175, symbol: ?canSurvive@ButtonBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;

    // vIndex: 183, symbol: __unk_vfn_183
    virtual void __unk_vfn_183();

    // vIndex: 188, symbol: ?entityInside@ButtonBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;

    // symbol: ?isButtonBlock@ButtonBlock@@UEBA_NXZ
    MCVAPI bool isButtonBlock() const;

    // symbol: ?isInteractiveBlock@ButtonBlock@@UEBA_NXZ
    MCVAPI bool isInteractiveBlock() const;

    // symbol: ?buttonPressed@ButtonBlock@@QEBAXAEAVBlockSource@@AEBVBlock@@AEBVVec3@@PEAVActor@@@Z
    MCAPI void buttonPressed(class BlockSource&, class Block const&, class Vec3 const&, class Actor*) const;

    // symbol: ?canAttachTo@ButtonBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    MCAPI static bool canAttachTo(class BlockSource&, class BlockPos const&, uchar);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0ButtonBlock@@IEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@_N@Z
    MCAPI ButtonBlock(std::string const&, int, class Material const&, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_buttonUnpressed@ButtonBlock@@AEBAXAEAVBlockSource@@AEBVBlock@@AEBVVec3@@PEAVActor@@@Z
    MCAPI void _buttonUnpressed(class BlockSource&, class Block const&, class Vec3 const&, class Actor*) const;

    // symbol: ?_checkPressed@ButtonBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _checkPressed(class BlockSource&, class BlockPos const&) const;

    // symbol: ?_getShape@ButtonBlock@@AEBA?AVAABB@@_NE0@Z
    MCAPI class AABB _getShape(bool, uchar, bool) const;

    // NOLINTEND
};
