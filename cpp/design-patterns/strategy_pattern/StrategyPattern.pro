QT -= gui

CONFIG += c++17 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        coreapp.cpp \
        ducks/duck.cpp \
        ducks/mallardduck.cpp \
        ducks/rubberduck.cpp \
        fly_behavior/flywithwings.cpp \
        fly_behavior/nofly.cpp \
        main.cpp \
        quack_behavior/silence.cpp \
        quack_behavior/squak.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    coreapp.h \
    ducks/duck.h \
    ducks/mallardduck.h \
    ducks/rubberduck.h \
    fly_behavior/flybehavior.h \
    fly_behavior/flywithwings.h \
    fly_behavior/nofly.h \
    quack_behavior/quackbehavior.h \
    quack_behavior/silence.h \
    quack_behavior/squak.h
