#-------------------------------------------------
#
# Project created by QtCreator 2015-07-28T21:01:59
#
#-------------------------------------------------

QT       += core gui

QT           += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Client
TEMPLATE = app


SOURCES += main.cpp\
        client.cpp

HEADERS  += client.h

FORMS    += client.ui


 # install
 target.path = $$[QT_INSTALL_EXAMPLES]/network/fortuneclient
 sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS fortuneclient.pro
 sources.path = $$[QT_INSTALL_EXAMPLES]/network/fortuneclient
 INSTALLS += target sources
