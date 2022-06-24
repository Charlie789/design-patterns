#pragma once
#include <QDebug>


class FlyBehavior
{
public:
    virtual ~FlyBehavior()
    {
        qDebug() << "Byebye flying";
    }
    virtual void fly() = 0;
};

