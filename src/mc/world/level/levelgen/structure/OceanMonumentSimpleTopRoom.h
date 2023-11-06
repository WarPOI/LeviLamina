#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/OceanMonumentPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class OceanMonumentSimpleTopRoom : public ::OceanMonumentPiece {
public:
    // prevent constructor by default
    OceanMonumentSimpleTopRoom& operator=(OceanMonumentSimpleTopRoom const&);
    OceanMonumentSimpleTopRoom(OceanMonumentSimpleTopRoom const&);
    OceanMonumentSimpleTopRoom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~OceanMonumentSimpleTopRoom();

    // vIndex: 2, symbol: ?getType@OceanMonumentSimpleTopRoom@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol:
    // ?postProcess@OceanMonumentSimpleTopRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

    // NOLINTEND
};
