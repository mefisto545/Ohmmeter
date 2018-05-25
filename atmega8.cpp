#include "atmega8.h"

Atmega8::Atmega8(QObject *parent) : QObject(parent)
{

}

void Atmega8::onCreation()
{
    serial = new QSerialPort(this);
    reserveFile = new QFile(this);
    QApplication::connect(this, SIGNAL(responceAvr(QString)), this, SLOT(plotChangedFiber(QString)));
}

void Atmega8::connect(QString portName)
{
    if(serial == NULL)
    {
        serial = new QSerialPort(this);
    }

    if(serial->isOpen())
    {
        emit connectedAvr();
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
            emit responceAvr("Device not found");
        } else
        {
            emit responceAvr("SerialPort error number " + QString::number(getError));
        }
        return; // если попытка подключения умерла на взлете
    }

    emit connectedAvr();

    return;

}

void Atmega8::disconnect()
{
    if(!serial->isOpen())
    {
        return;
    }
    serial->close();
    emit disconnectedAvr();
}

void Atmega8::plotStart()
{
    time.start();

    run = true;
    QString lalala;



    reserveFile->setFileName(QDateTime::currentDateTime().toString("yy_M_d_hh_mm_ss") + ".dat");
    reserveFile->open(QIODevice::WriteOnly);
    reserveFile->write(" \n");
    plotBegin();
//    while(run)
//    {
//        plot();
//        QThread::msleep(20);
//        QApplication::processEvents();
//    }

}

void Atmega8::plotBegin()
{
    switch (currentFiber-1) {
    case 0:
        sendAndReadAvr("0");
        break;
    case 1:
        sendAndReadAvr("1");
        break;
    case 2:
        sendAndReadAvr("2");
        break;
    case 3:
        sendAndReadAvr("3");
        break;
    case 4:
        sendAndReadAvr("4");
        break;
    case 5:
        sendAndReadAvr("5");
        break;
    case 6:
        sendAndReadAvr("6");
        break;
    case 7:
        sendAndReadAvr("7");
        break;
    case 8:
        sendAndReadAvr("8");
        break;
    case 9:
        sendAndReadAvr("9");
        break;
    case 10:
        sendAndReadAvr("a");
        break;
    case 11:
        sendAndReadAvr("b");
        break;
    case 12:
        sendAndReadAvr("c");
        break;
    case 13:
        sendAndReadAvr("d");
        break;
    case 14:
        sendAndReadAvr("e");
        break;
    case 15:
        sendAndReadAvr("f");
        break;
    case 16:
        sendAndReadAvr("g");
        break;
    case 17:
        sendAndReadAvr("h");
        break;
    case 18:
        sendAndReadAvr("i");
        break;
    case 19:
        sendAndReadAvr("j");
        break;
    case 20:
        sendAndReadAvr("k");
        break;
    default:
        break;
    }
}

void Atmega8::plotChangedFiber(QString responce)
{
    if(!run)
    {
        emit plotStopped();
        return;
    }
    if((responce.contains("@")) || (currentFiber == 1))
    {
        emit resistanceRequest();
    } else
    {
        if(currentFiber == 20)
        {
            currentFiber = 1;
        } else
        {
            currentFiber++;
        }
//        QThread::msleep(1);
        QApplication::processEvents(QEventLoop::AllEvents, 1);
        plotBegin();
    }
}

void Atmega8::plotGotResistance(double resistance)
{
    if(resistance != 0)
    {
        emit plotRequest(resistance, time.elapsed()/1000.0, currentFiber);
    }
//    while(time.elapsed() % 100 > 5)
//    {
//        QThread::msleep(1);
//    }
    QApplication::processEvents(QEventLoop::AllEvents,1);
    if(currentFiber == 20)
    {
        currentFiber = 1;
    } else
    {
        currentFiber++;
    }
    if(run)
    {
        plotBegin();
    }else
    {
        emit plotStopped();
    }
}

void Atmega8::plotStop()
{
    reserveFile->close();
    run = false;
}

QString Atmega8::readData()
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

void Atmega8::sendData(QString msg)
{
    if(serial->isOpen())
    {
        serial->write(msg.toLocal8Bit());
    }
    return;
}

QString Atmega8::sendAndReadAvr(QString msg)
{
    QString result;

    if(!msg.isEmpty())
    {
        sendData(msg);
    }
    result = readData();

    emit responceAvr(result);
    return result;
}
