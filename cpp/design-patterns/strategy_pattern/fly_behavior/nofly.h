#pragma once

#include "flybehavior.h"

class NoFly : public FlyBehavior
{
public:
    NoFly();

    // FlyBehavior interface
public:
    void fly();
};

