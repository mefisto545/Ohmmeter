#ifndef ATMEGA8_H
#define ATMEGA8_H

#include <QString>
#include <QObject>
#include <QSerialPort>
#include <QApplication>
#include <QFile>
#include <QDateTime>
#include <QElapsedTimer>
#include <QThread>

class Atmega8: public QObject
{
    Q_OBJECT
public:
    explicit Atmega8(QObject *parent = 0);
    QSerialPort *serial = NULL;
    QElapsedTimer time;
    bool run;
    QFile* reserveFile;
    int currentFiber = 1;

signals:
    void responceAvr(QString msg);
    void connectedAvr();
    void disconnectedAvr();
    void plotStopped();
    void resistanceRequest();
    void plotRequest(double resistance, double time, int fiber);

public slots:
    void onCreation();
    void connect(QString portName);
    QString readData();
    void sendData(QString msg);
    QString sendAndReadAvr(QString msg);
    void disconnect();
    void plotStart();
    void plotBegin();
    void plotChangedFiber(QString responce);
    void plotGotResistance(double resistance);
    void plotStop();

};

#endif // ATMEGA8_H
