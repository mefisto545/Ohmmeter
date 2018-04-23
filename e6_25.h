#ifndef E6_25_H
#define E6_25_H

#include <QString>
#include <QObject>
#include <QSerialPort>
#include <QApplication>
#include <QFile>
#include <QDateTime>

class E6_25 : public QObject
{
    Q_OBJECT
public:
    explicit E6_25(QObject *parent = 0);
    QSerialPort *serial = NULL;

signals:
    void responce(QString msg);
    void connected();
    void disconnected();


public slots:
    void connect(QString portName);
    QString readData();
    void sendData(QString msg);
    QString sendAndRead(QString msg);
    void disconnect();


};

#endif // E6_25_H
