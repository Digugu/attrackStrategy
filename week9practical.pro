TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    unit.cpp \
    regiment.cpp \
    unittypes.cpp

HEADERS += \
    unit.h \
    unittypes.h \
    regiment.h \
    attackstrategy.h
