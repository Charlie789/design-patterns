#pragma once

#include <fly_behavior/flybehavior.h>
#include <quack_behavior/quackbehavior.h>


class Duck
{
public:
    virtual ~Duck();

    void perform_fly();
    void perform_quack();
    void swim();

    void set_fly_behavior(std::unique_ptr<FlyBehavior> fly_behavior);
    void set_quack_behavior(QuackBehavior* quack_behavior);

    virtual void display() = 0;

protected:
    Duck(FlyBehavior* fly_behavior, QuackBehavior* quack_behavior);

    std::unique_ptr<FlyBehavior> m_fly_behavior;
    std::unique_ptr<QuackBehavior> m_quack_behavior;
};

