#ifndef E6_25_H
#define E6_25_H

#include <QString>
#include <QObject>
#include <QSerialPort>
#include <QApplication>
#include <QFile>
#include <QDateTime>
#include <QElapsedTimer>
#include <QThread>

class E6_25 : public QObject
{
    Q_OBJECT
public:
    explicit E6_25(QObject *parent = 0);
    QSerialPort *serial = NULL;
    QElapsedTimer time;
    bool run;
    QFile* reserveFile;

signals:
    void responce(QString msg);
    void connected();
    void disconnected();
    void graphData(double resistance, double time);
    void plotStopped();
    void checkResult(QStringList result);



public slots:
    void onCreation();
    void connect(QString portName);
    QString readData();
    void sendData(QString msg);
    QString sendAndRead(QString msg);
    void disconnect();
    void plotStart();
    void plot();
    void plotStop();
    void check();

};

#endif // E6_25_H
