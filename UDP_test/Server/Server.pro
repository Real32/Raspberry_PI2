#-------------------------------------------------
#
# Project created by QtCreator 2015-07-30T02:53:20
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Server
TEMPLATE = app


SOURCES += main.cpp\
        server.cpp

HEADERS  += server.h

FORMS    += server.ui

 # install
 target.path = $$[QT_INSTALL_EXAMPLES]/network/broadcastreceiver
 sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS broadcastreceiver.pro
 sources.path = $$[QT_INSTALL_EXAMPLES]/network/broadcastreceiver
 INSTALLS += target sources
