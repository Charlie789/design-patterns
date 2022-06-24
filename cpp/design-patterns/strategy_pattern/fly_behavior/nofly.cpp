#include "nofly.h"
#include <QDebug>

NoFly::NoFly()
{

}

void NoFly::fly()
{
    qDebug() << QLatin1String("Sorry, I'm not flying!");
}
