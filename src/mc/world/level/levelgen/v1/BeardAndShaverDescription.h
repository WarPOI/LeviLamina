#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BeardAndShaverDescription {
public:
    // prevent constructor by default
    BeardAndShaverDescription& operator=(BeardAndShaverDescription const&);
    BeardAndShaverDescription(BeardAndShaverDescription const&);
    BeardAndShaverDescription();

public:
    // NOLINTBEGIN
    // symbol: ??0BeardAndShaverDescription@@QEAA@VBeardingDescriptionCache@@AEBUBeardKernel@@MM@Z
    MCAPI BeardAndShaverDescription(class BeardingDescriptionCache, struct BeardKernel const&, float, float);

    // symbol: ?calculateContribution@BeardAndShaverDescription@@QEBAMAEBVBlockPos@@@Z
    MCAPI float calculateContribution(class BlockPos const&) const;

    // symbol: ?getCache@BeardAndShaverDescription@@QEBAAEBVBeardingDescriptionCache@@XZ
    MCAPI class BeardingDescriptionCache const& getCache() const;

    // NOLINTEND
};
