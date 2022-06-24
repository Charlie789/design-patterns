#include "squak.h"
#include <QDebug>

Squak::Squak()
{

}

void Squak::quack()
{
    qDebug() << QLatin1String("Squak");
}
