#-------------------------------------------------
#
# Project created by QtCreator 2016-01-06T19:17:57
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = udp_gui
TEMPLATE = app
CONFIG   += console

SOURCES += main.cpp\
        mainwindow.cpp \
    udp.cpp

HEADERS  += mainwindow.h \
    udp.h

FORMS    += mainwindow.ui
