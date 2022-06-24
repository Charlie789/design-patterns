#include "duck.h"
#include <QDebug>

Duck::~Duck()
{
    //delete m_quack_behavior;
    qDebug() << "Destruction!";
}

void Duck::perform_fly()
{
    if (!m_fly_behavior)
        return;

    m_fly_behavior->fly();
}

void Duck::perform_quack()
{
    if (!m_quack_behavior)
        return;

    m_quack_behavior->quack();
}

void Duck::swim()
{
    qDebug() << QLatin1String("swimming");
}

void Duck::set_fly_behavior(std::unique_ptr<FlyBehavior> fly_behavior)
{
    m_fly_behavior = std::move(fly_behavior);
}

void Duck::set_quack_behavior(QuackBehavior *quack_behavior)
{
//    m_quack_behavior = quack_behavior;
}

Duck::Duck(FlyBehavior *fly_behavior, QuackBehavior *quack_behavior):
    m_fly_behavior(fly_behavior),
    m_quack_behavior(quack_behavior)
{

}
