#-------------------------------------------------
#
# Project created by QtCreator 2016-05-20T14:00:17
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = Attitude
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

LIBS    += -lwiringPi

SOURCES += main.cpp \
    attitude.cpp \
    testattitude.cpp

HEADERS += \
    attitude.h \
    testattitude.h
