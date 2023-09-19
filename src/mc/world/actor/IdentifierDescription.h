#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IdentifierDescription {
public:
    // prevent constructor by default
    IdentifierDescription& operator=(IdentifierDescription const&);
    IdentifierDescription(IdentifierDescription const&);
    IdentifierDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getJsonName@IdentifierDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // symbol: ??1IdentifierDescription@@UEAA@XZ
    MCVAPI ~IdentifierDescription();

    // NOLINTEND
};
