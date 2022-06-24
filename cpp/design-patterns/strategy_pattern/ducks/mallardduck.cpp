#include "mallardduck.h"
#include <QDebug>
#include <fly_behavior/flywithwings.h>
#include <quack_behavior/squak.h>

MallardDuck::MallardDuck():
    Duck(new FlyWithWings(), new Squak())
{
}

void MallardDuck::display()
{
    qDebug() << QLatin1String("I'm MallardDuck");
}
