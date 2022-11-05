QT -= gui

CONFIG += c++17 console
CONFIG -= app_bundle

SOURCES += \
        main.cpp \
        stl1.cc \
        stl2.cc \
        stl3.cc \
        stl4.cc \
        stl5.cc \
        stl6.cc \
        stl7.cc \
        stl8.cc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    test.hh

