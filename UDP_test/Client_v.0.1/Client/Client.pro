#-------------------------------------------------
#
# Project created by QtCreator 2015-07-30T20:11:51
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Client
TEMPLATE = app


SOURCES += main.cpp\
        client.cpp

HEADERS  += client.h

FORMS    += client.ui

 # install
 target.path = $$[QT_INSTALL_EXAMPLES]/network/broadcastsender
 sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS broadcastsender.pro
 sources.path = $$[QT_INSTALL_EXAMPLES]/network/broadcastsender
 INSTALLS += target sources
