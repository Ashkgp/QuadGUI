#-------------------------------------------------
#
# Project created by QtCreator 2016-03-30T20:01:13
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QuadGUI
TEMPLATE = app


SOURCES += main.cpp\
        backlayout.cpp

HEADERS  += backlayout.h

FORMS    += backlayout.ui

LIBS += `pkg-config --libs opencv`
