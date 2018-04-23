#include "e6_25.h"



E6_25::E6_25(QObject *parent) : QObject(parent)
{

}

void E6_25::connect(QString portName)
{
    using namespace QSerialPort;

    serial = new QSerialPort(this);

    serial->setBaudRate(Baud9600);
    serial->setParity(NoParity);
    serial->setDataBits(Data8);
    serial->setStopBits(OneStop);
    serial->setFlowControl(NoFlowControl);

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

}
