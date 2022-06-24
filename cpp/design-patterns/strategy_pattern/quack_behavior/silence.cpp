#include "silence.h"
#include <QDebug>

Silence::Silence()
{

}

void Silence::quack()
{
    qDebug() << QStringLiteral("...");
}
