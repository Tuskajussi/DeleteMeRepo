TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        basicmeter.cpp \
        firemeter.cpp \
        heater.cpp \
        housecontroller.cpp \
        main.cpp

HEADERS += \
    basicmeter.h \
    firemeter.h \
    heater.h \
    housecontroller.h
