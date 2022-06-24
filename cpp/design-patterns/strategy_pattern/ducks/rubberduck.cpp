#include "rubberduck.h"
#include <QDebug>
#include <fly_behavior/nofly.h>
#include <quack_behavior/silence.h>

RubberDuck::RubberDuck():
    Duck(new NoFly(), new Silence())
{
}

void RubberDuck::display()
{
    qDebug() << QLatin1String("I'm RubberDuck");
}
