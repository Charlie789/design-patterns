#include "coreapp.h"
#include <ducks/mallardduck.h>
#include <ducks/rubberduck.h>
#include <fly_behavior/flywithwings.h>


CoreApp::CoreApp(int &argc, char **argv):
    QCoreApplication(argc, argv)
{
    Duck* mallard = new MallardDuck();
    mallard->display();
    mallard->perform_fly();
    mallard->perform_quack();

    Duck* rubber = new RubberDuck();
    rubber->display();
    rubber->perform_fly();
    // Podmienianie std::unique_ptr
    std::unique_ptr<FlyBehavior> new_behavior = std::make_unique<FlyWithWings>();
    rubber->set_fly_behavior(std::move(new_behavior));
    rubber->perform_fly();
    rubber->perform_quack();

    delete rubber;
    delete mallard;
    exit();
}
