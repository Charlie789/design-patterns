#pragma once

#include "flybehavior.h"

class FlyWithWings : public FlyBehavior
{
public:
    FlyWithWings();

    // FlyBehavior interface
public:
    void fly();
};

