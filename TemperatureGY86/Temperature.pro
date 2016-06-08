#-------------------------------------------------
#
# Project created by QtCreator 2016-05-22T07:14:02
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = Temperature
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

LIBS    += -lwiringPi

SOURCES += main.cpp \
    temperature.cpp \
    testtemperature.cpp

HEADERS += \
    temperature.h \
    testtemperature.h
