#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/DecoratorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class InverterDefinition : public ::DecoratorDefinition {
public:
    // prevent constructor by default
    InverterDefinition& operator=(InverterDefinition const&);
    InverterDefinition(InverterDefinition const&);
    InverterDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~InverterDefinition();

    // vIndex: 1, symbol: ?load@InverterDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
    virtual void load(class Json::Value, class BehaviorFactory const&);

    // NOLINTEND
};
