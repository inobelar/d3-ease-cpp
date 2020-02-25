TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

include(../src/d3_ease.pri)

SOURCES += \
        main.cpp

HEADERS += \
    bounce-test.hpp \
    circle-test.hpp \
    cubic-test.hpp \
    exp-test.hpp \
    generic.hpp \
    inDelta.hpp \
    linear-test.hpp \
    poly-test.hpp \
    quad-test.hpp \
    sin-test.hpp
