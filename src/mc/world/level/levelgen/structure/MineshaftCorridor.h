#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MineshaftPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class MineshaftCorridor : public ::MineshaftPiece {

public:
    // prevent constructor by default
    MineshaftCorridor& operator=(MineshaftCorridor const&) = delete;
    MineshaftCorridor(MineshaftCorridor const&)            = delete;
    MineshaftCorridor()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?getType\@MineshaftCorridor\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl 3
     * @symbol
     * ?addChildren\@MineshaftCorridor\@\@UEAAXAEAVStructurePiece\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@\@Z
     */
    virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /**
     * @vftbl 4
     * @symbol ?postProcess\@MineshaftCorridor\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /**
     * @vftbl 5
     * @symbol ?postProcessMobsAt\@MineshaftCorridor\@\@UEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    /**
     * @symbol ?_placeCobWeb\@MineshaftCorridor\@\@QEAAXAEAVBlockSource\@\@AEBVBoundingBox\@\@AEAVRandom\@\@MHHH\@Z
     */
    MCAPI void
    _placeCobWeb(class BlockSource&, class BoundingBox const&, class Random&, float, int32_t, int32_t, int32_t);
    /**
     * @symbol ?_placeSupport\@MineshaftCorridor\@\@QEAAXAEAVBlockSource\@\@AEBVBoundingBox\@\@HHHHHAEAVRandom\@\@\@Z
     */
    MCAPI void
    _placeSupport(class BlockSource&, class BoundingBox const&, int32_t, int32_t, int32_t, int32_t, int32_t, class Random&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_fillPillarDownOrChainUp\@MineshaftCorridor\@\@AEAAXAEAVBlockSource\@\@HHHAEBVBoundingBox\@\@\@Z
     */
    MCAPI void _fillPillarDownOrChainUp(class BlockSource&, int32_t, int32_t, int32_t, class BoundingBox const&);
    /**
     * @symbol ?_placeDoubleLowerOrUpperSupport\@MineshaftCorridor\@\@AEAAXAEAVBlockSource\@\@AEBVBoundingBox\@\@HHH\@Z
     */
    MCAPI void _placeDoubleLowerOrUpperSupport(class BlockSource&, class BoundingBox const&, int32_t, int32_t, int32_t);
    // NOLINTEND
};
