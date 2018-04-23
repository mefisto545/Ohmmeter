#-------------------------------------------------
#
# Project created by QtCreator 2018-04-19T17:34:39
#
#-------------------------------------------------

QT       += core gui serialport
CONFIG   += c++11


QMAKE_LFLAGS += -static -static-libgcc

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = MilliOhmmeter
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qcustomplot.cpp \
    e6_25.cpp

HEADERS  += mainwindow.h \
    qcustomplot.h \
    e6_25.h

FORMS    += mainwindow.ui
