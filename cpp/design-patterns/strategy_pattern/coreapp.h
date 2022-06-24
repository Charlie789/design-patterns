#pragma once

#include <QCoreApplication>

class CoreApp : public QCoreApplication
{
    Q_OBJECT
public:
    CoreApp(int& argc, char** argv);
};

