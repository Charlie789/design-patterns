#pragma once
#include <QDebug>

class QuackBehavior
{
public:
    virtual ~QuackBehavior()
    {
        qDebug() << "I'm getting muted :(";
    };
    virtual void quack() = 0;
};
