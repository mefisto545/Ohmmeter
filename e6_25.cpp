#include "e6_25.h"



E6_25::E6_25(QObject *parent) : QObject(parent)
{

}

void E6_25::onCreation()
{
    serial = new QSerialPort(this);
    reserveFile = new QFile(this);
}

void E6_25::connect(QString portName)
{
    if(serial == NULL)
    {
        serial = new QSerialPort(this);
    }

    if(serial->isOpen())
    {
        emit connected();
        return;
    }

    serial->setPortName(portName);
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setParity(QSerialPort::NoParity);
    serial->setDataBits(QSerialPort::Data8);
    serial->setStopBits(QSerialPort::OneStop);

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


void E6_25::plotStart()
{
    time.start();

    run = true;
    QString lalala;



    reserveFile->setFileName(QDateTime::currentDateTime().toString("yy_M_d_hh_mm_ss") + ".dat");
    reserveFile->open(QIODevice::WriteOnly);
    reserveFile->write("Time, Resistance, SystemTime \nSec, Ohm, Sec\n");

    while(run)
    {
        plot();
        QThread::msleep(20);
        QApplication::processEvents();
    }
    emit plotStopped();
}

void E6_25::plot()
{
    QString result;

    sendData("[?D]");
    result = readData();

    if(!result.isEmpty())
    {
        double resistance = 1;
        double temp;
        int index;
        QString temps;
        if (!result.contains("Ohm"))
        {
            return;
        }
        if(result.contains("kOhm"))
        {
            resistance *= 1000;
        } else
        {
            if(result.contains("mOhm"))
            {
                resistance *=0.001;
            } else
            {
                if(result.contains("MOhm"))
                {
                    resistance *=1000000;
                }
            }
        }
        index = result.indexOf('=');
        if(index == -1)
        {
            return;
        }
        temps = QString(result.data() + index+1, 6);
        temp = temps.toDouble();
        resistance *= temp;

        double curtime = time.elapsed()/1000.0;

        reserveFile->write(QString::number(curtime, 'g', 5).toLocal8Bit() + ", " + QString::number(resistance, 'g', 5).toLocal8Bit() + ", " + QString::number(QTime::currentTime().msecsSinceStartOfDay()).toLocal8Bit() + '\n');
        reserveFile->flush();
        emit graphData(resistance, curtime);
    }
}

void E6_25::plotStop()
{
    reserveFile->close();
    run = false;
}

void E6_25::check()
{
    QStringList result;
    QString respond;

    sendData("[?R]");
    respond = readData();
    result.append(respond);

    sendData("[?F]");
    respond = readData();
    result.append(respond);

    sendData("[?I]");
    respond = readData();
    result.append(respond);

    sendData("[?C]");
    respond = readData();
    result.append(respond);

    emit checkResult(result);
}
