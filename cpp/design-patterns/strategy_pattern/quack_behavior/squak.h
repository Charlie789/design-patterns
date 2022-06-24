#pragma once

#include "quackbehavior.h"

class Squak : public QuackBehavior
{
public:
    Squak();

    // QuackBehavior interface
public:
    void quack();
};

