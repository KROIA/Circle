#-------------------------------------------------
#
# Project created by QtCreator 2018-10-01T22:18:03
#
#-------------------------------------------------

QT       += widgets

TARGET = Circle
TEMPLATE = lib

DEFINES += CIRCLE_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
incPath = C:\Users\AlexKrieg\Documents\QT\lib\Geometry

INCLUDEPATH += $$incPath

SOURCES += \
        circle.cpp \
        $$incPath/geometry.cpp

HEADERS += \
        circle.h \
        circle_global.h 

unix {
    target.path = /usr/lib
    INSTALLS += target
}
