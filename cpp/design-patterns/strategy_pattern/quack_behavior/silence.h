#pragma once

#include "quackbehavior.h"

class Silence : public QuackBehavior
{
public:
    Silence();

    // QuackBehavior interface
public:
    void quack();
};

