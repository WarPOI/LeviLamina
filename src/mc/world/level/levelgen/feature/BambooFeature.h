#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class BambooFeature : public ::Feature {
public:
    // prevent constructor by default
    BambooFeature& operator=(BambooFeature const&);
    BambooFeature(BambooFeature const&);
    BambooFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~BambooFeature();

    // vIndex: 3, symbol: ?place@BambooFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // NOLINTEND
};
