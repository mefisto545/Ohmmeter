#include "e6_25.h"



E6_25::E6_25(QObject *parent) : QObject(parent)
{

}

void E6_25::connect(QString portName)
{
    if(serial == NULL)
    {
        serial = new QSerialPort(this);
    }

    if(serial->isOpen())
    {
        return;
    }

    serial->setPortName(portName);
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setParity(QSerialPort::NoParity);
    serial->setDataBits(QSerialPort::Data8);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);

    if(!serial->open(QIODevice::ReadWrite))
    {
        QSerialPort::SerialPortError getError = QSerialPort::NoError;
        getError = serial->error();
        if (getError == QSerialPort::DeviceNotFoundError)
        {
            emit responce("Device not found");
        } else
        {
            emit responce("SerialPort error number " + QString::number(getError));
        }
        return; // если попытка подключения умерла на взлете
    }

    emit connected();

    return;

}

void E6_25::disconnect()
{
    if(!serial->isOpen())
    {
        return;
    }
    serial->close();
    emit disconnected();
}

QString E6_25::readData()
{
    if(serial->isOpen())
    {
        QByteArray result;
        result += serial->readAll();
        if(serial->waitForReadyRead(50))
        {
            while(serial->waitForReadyRead(50));
            result += serial->readAll();
        }
        return result;
    }
    return "";
}

void E6_25::sendData(QString msg)
{
    if(serial->isOpen())
    {
        serial->write(msg.toLocal8Bit());
    }
    return;
}

QString E6_25::sendAndRead(QString msg)
{
    QString result;

    if(!msg.isEmpty())
    {
        sendData(msg);
    }
    result = readData();

    emit responce(result);
    return result;
}

