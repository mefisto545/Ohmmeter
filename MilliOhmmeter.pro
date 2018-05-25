#-------------------------------------------------
#
# Project created by QtCreator 2018-04-19T17:34:39
#
#-------------------------------------------------

QT       += core gui serialport
CONFIG   += c++11

RC_FILE = Rc.rc

QMAKE_LFLAGS += -static -static-libgcc

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = MilliOhmmeter
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qcustomplot.cpp \
    e6_25.cpp \
    graphswindow.cpp \
    atmega8.cpp

HEADERS  += mainwindow.h \
    qcustomplot.h \
    e6_25.h \
    graphswindow.h \
    atmega8.h

FORMS    += mainwindow.ui \
    graphswindow.ui
