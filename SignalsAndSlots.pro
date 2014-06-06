#-------------------------------------------------
#
# Project created by QtCreator 2014-06-06T12:35:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SignalsAndSlots
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    sender.cpp \
    receiver.cpp

HEADERS  += mainwindow.h \
    sender.h \
    receiver.h

FORMS    += mainwindow.ui
