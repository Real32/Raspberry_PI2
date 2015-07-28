#-------------------------------------------------
#
# Project created by QtCreator 2015-07-28T22:23:49
#
#-------------------------------------------------

QT       += core gui
QT           += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Server
TEMPLATE = app


SOURCES += main.cpp\
        server.cpp

HEADERS  += server.h

FORMS    += server.ui

 # install
 target.path = $$[QT_INSTALL_EXAMPLES]/network/fortuneserver
 sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS fortuneserver.pro
 sources.path = $$[QT_INSTALL_EXAMPLES]/network/fortuneserver
 INSTALLS += target sources
