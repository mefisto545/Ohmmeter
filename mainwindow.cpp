#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    device = new E6_25();
    avr = new Atmega8();
    tred = new QThread(this);
    avrtred = new QThread(this);

    connect(device, SIGNAL(responce(QString)), this, SLOT(printMsg(QString)));
    connect(this, SIGNAL(requestConnect(QString)), device, SLOT(connect(QString)));
    connect(this, SIGNAL(requestDisconnect()), device, SLOT(disconnect()));
    connect(this, SIGNAL(requestSendAndRead(QString)), device, SLOT(sendAndRead(QString)));
    connect(this, SIGNAL(requestPlot()), device, SLOT(plotStart()));
    connect(this, SIGNAL(requestPlotStop()), device, SLOT(plotStop()));
    connect(this, SIGNAL(requestCheck()), device, SLOT(check()));
    connect(device, SIGNAL(checkResult(QStringList)), this, SLOT(afterCheck(QStringList)));
    connect(device, SIGNAL(connected()), this, SLOT(afterConnect()));
    connect(device, SIGNAL(disconnected()), this, SLOT(afterDisconnect()));
    connect(device, SIGNAL(graphData(double,double,int)), this, SLOT(updateGraph(double,double,int)));
    connect(device, SIGNAL(plotStopped()), this, SLOT(afterStop()));
    connect(tred, SIGNAL(started()), device, SLOT(onCreation()));



    connect(avr, SIGNAL(responceAvr(QString)), this, SLOT(printMsgAvr(QString)));
    connect(this, SIGNAL(requestConnectAvr(QString)), avr, SLOT(connect(QString)));
    connect(this, SIGNAL(requestDisconnectAvr()), avr, SLOT(disconnect()));
    connect(this, SIGNAL(requestSendAndReadAvr(QString)), avr, SLOT(sendAndReadAvr(QString)));
    connect(avr, SIGNAL(connectedAvr()), this, SLOT(afterConnectAvr()));
    connect(avr, SIGNAL(disconnectedAvr()), this, SLOT(afterDisconnectAvr()));
    connect(avrtred, SIGNAL(started()), avr, SLOT(onCreation()));

    connect(this, SIGNAL(requestAvrPlot()), avr, SLOT(plotStart()));
    connect(avr,SIGNAL(resistanceRequest()), device, SLOT(giveResistance()));
    connect(device, SIGNAL(resistanceResponce(double)), avr, SLOT(plotGotResistance(double)));
    connect(avr, SIGNAL(plotRequest(double,double,int)), this, SLOT(updateGraph(double,double,int)));
    connect(this, SIGNAL(requestAvrPlotStop()), avr, SLOT(plotStop()));
    connect(avr, SIGNAL(plotStopped()), this, SLOT(afterStop()));

    device->moveToThread(tred);
    tred->start();
    avr->moveToThread(avrtred);
    avrtred->start();

    on_actionComUpd_triggered();

    ui->pushButtonSend->setDisabled(true);
    ui->pushButtonRecieve->setDisabled(true);

    ui->lineEditCommand->setDisabled(true);
    ui->lineEditResponce->setDisabled(true);

    ui->pushButtonSend_2->setDisabled(true);
    ui->pushButtonRecieve_2->setDisabled(true);

    ui->lineEditCommand_2->setDisabled(true);
    ui->lineEditResponce_2->setDisabled(true);

    ui->widgetPlot->addGraph();

    setupRange();

    connect(this, SIGNAL(msg(QString)),
            this, SLOT(printMsg(QString)));
}

void MainWindow::setupRange()
{
    QStringList rangeList;
    rangeList.append("20 mΩ");
    rangeList.append("200 mΩ");
    rangeList.append("2 Ω");
    rangeList.append("20 Ω");
    rangeList.append("200 Ω");
    rangeList.append("2 kΩ");
    rangeList.append("20 kΩ");
    rangeList.append("200 kΩ");
    rangeList.append("2 MΩ");

    ui->comboBoxRange->addItems(rangeList);
}


void MainWindow::closeEvent(QCloseEvent *event)//Перед закрытием проги
{
    device->deleteLater();
    tred->exit();
    avrtred->exit();
    QMainWindow::closeEvent(event);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionComUpd_triggered()
{
    ui->comboBoxPortName->clear();
    ui->comboBoxPortName_2->clear();

    foreach (const QSerialPortInfo &info,
             QSerialPortInfo::availablePorts()) {
        ui->comboBoxPortName->addItem(info.portName());
        ui->comboBoxPortName_2->addItem(info.portName());
    }

    return;
}

void MainWindow::on_pushButtonConnect_clicked()
{
    ui->lineEditCommand->setText("Enter your message here!");

    if (ui->pushButtonConnect->text() == "Connect")
    {
        emit requestConnect(ui->comboBoxPortName->currentText());
    } else
    {
        emit requestDisconnect();
    }
}

void MainWindow::afterConnect()
{

    ui->pushButtonConnect->setText("Disconnect");

    ui->comboBoxPortName->setEnabled(false);

    ui->lineEditCommand->setEnabled(true);
    ui->lineEditResponce->setEnabled(true);

    ui->pushButtonRecieve->setEnabled(true);
    ui->pushButtonSend->setEnabled(true);

}

void MainWindow::afterConnectAvr()
{

    ui->pushButtonConnect_2->setText("Disconnect");

    ui->comboBoxPortName_2->setEnabled(false);

    ui->lineEditCommand_2->setEnabled(true);
    ui->lineEditResponce_2->setEnabled(true);

    ui->pushButtonRecieve_2->setEnabled(true);
    ui->pushButtonSend_2->setEnabled(true);

}

void MainWindow::afterDisconnect()
{
    ui->pushButtonConnect->setText("Connect");

    ui->comboBoxPortName->setEnabled(true);

    ui->lineEditCommand->setEnabled(false);
    ui->lineEditResponce->setEnabled(false);

    ui->pushButtonRecieve->setEnabled(false);
    ui->pushButtonSend->setEnabled(false);
}

void MainWindow::afterDisconnectAvr()
{
    ui->pushButtonConnect_2->setText("Connect");

    ui->comboBoxPortName_2->setEnabled(true);

    ui->lineEditCommand_2->setEnabled(false);
    ui->lineEditResponce_2->setEnabled(false);

    ui->pushButtonRecieve_2->setEnabled(false);
    ui->pushButtonSend_2->setEnabled(false);
}

void MainWindow::printMsg(const QString &s)
{
    ui->lineEditResponce->setText(s);
}

void MainWindow::printMsgAvr(const QString &s)
{
    ui->lineEditResponce_2->setText(s);
}

void MainWindow::on_pushButtonSend_clicked()
{
    emit requestSendAndRead(ui->lineEditCommand->text());
    return;
}

void MainWindow::on_pushButtonRecieve_clicked()
{
    emit requestSendAndRead("");
}

void MainWindow::on_pushButtonRecieve_2_clicked()
{
    emit requestSendAndReadAvr("");
}

void MainWindow::on_pushButtonControlOn_clicked()
{
    emit requestSendAndRead("[+]");
}

void MainWindow::on_pushButtonControlOff_clicked()
{
    emit requestSendAndRead("[-]");
}

void MainWindow::on_pushButtonPlot_clicked()
{
    multiMode = ui->checkBox->isChecked();
    if(ui->pushButtonPlot->text() == "Plot")
    {
        if(!multiMode)
        {
            ui->widgetPlot->graph(0)->data().data()->clear();
            emit requestPlot();
        }else
        {
            graphs.clear();
            emit requestAvrPlot();
        }
        ui->pushButtonPlot->setText("Stop");
    } else
    {
        emit requestPlotStop();
        emit requestAvrPlotStop();
    }
}

void MainWindow::afterStop()
{
    ui->pushButtonPlot->setText("Plot");
}

void MainWindow::updateGraph(double resistance, double time, int fiberNumber = 0)
{
    if(multiMode)
        graphs.updateGraphs(resistance, time, fiberNumber);
    else{
    ui->widgetPlot->graph(0)->addData(time,resistance);
    ui->widgetPlot->yAxis->setRange(0, 1);
    ui->widgetPlot->rescaleAxes();
    ui->widgetPlot->yAxis->scaleRange(1.1);
    ui->widgetPlot->replot();
    }
}

void MainWindow::on_pushButtonFast_clicked()
{
    emit requestSendAndRead("[F0]");
}

void MainWindow::on_pushButtonSlow_clicked()
{
    emit requestSendAndRead("[F1]");
}

void MainWindow::on_pushButtonCompareOnGo_clicked()
{
    emit requestSendAndRead("[C1]");
}

void MainWindow::on_pushButtonCompareOnNogo_clicked()
{
    emit requestSendAndRead("[C2]");
}

void MainWindow::on_pushButtonNullOn_clicked()
{
    emit requestSendAndRead("[I1]");
}

void MainWindow::on_pushButtonNullOff_clicked()
{
    emit requestSendAndRead("[I0]");
}

void MainWindow::on_pushButtonCompareOff_clicked()
{
    emit requestSendAndRead("[C0]");
}

void MainWindow::on_pushButtonRange_clicked()
{
    const QString range = ui->comboBoxRange->currentText();

    if (range.contains("20 mΩ"))
    {
        emit requestSendAndRead("[R1]");
    }
    if (range.contains("200 mΩ"))
    {
        emit requestSendAndRead("[R2]");
    }
    if (range.contains("2 Ω"))
    {
        emit requestSendAndRead("[R3]");
    }
    if (range.contains("20 Ω"))
    {
        emit requestSendAndRead("[R4]");
    }
    if (range.contains("200 Ω"))
    {
        emit requestSendAndRead("[R5]");
    }
    if (range.contains("2 kΩ"))
    {
        emit requestSendAndRead("[R6]");
    }
    if (range.contains("20 kΩ"))
    {
        emit requestSendAndRead("[R7]");
    }
    if (range.contains("200 kΩ"))
    {
        emit requestSendAndRead("[R8]");
    }
    if (range.contains("2 MΩ"))
    {
        emit requestSendAndRead("[R9]");
    }

    return;
}

void MainWindow::on_pushButtonCheck_clicked()
{
    emit requestCheck();
}

void MainWindow::afterCheck(QStringList checkResult)
{
    ui->pushButtonFast->setStyleSheet(this->styleSheet());
    ui->pushButtonSlow->setStyleSheet(this->styleSheet());
    ui->pushButtonCompareOff->setStyleSheet(this->styleSheet());
    ui->pushButtonCompareOnGo->setStyleSheet(this->styleSheet());
    ui->pushButtonCompareOnNogo->setStyleSheet(this->styleSheet());
    ui->pushButtonNullOff->setStyleSheet(this->styleSheet());
    ui->pushButtonNullOn->setStyleSheet(this->styleSheet());

    QString temp;

    temp = checkResult.at(0);
    if(temp.contains("R1"))
    {
        ui->comboBoxRange->setCurrentIndex(0);
    }
    if(temp.contains("R2"))
    {
        ui->comboBoxRange->setCurrentIndex(1);
    }
    if(temp.contains("R3"))
    {
        ui->comboBoxRange->setCurrentIndex(2);
    }
    if(temp.contains("R4"))
    {
        ui->comboBoxRange->setCurrentIndex(3);
    }
    if(temp.contains("R5"))
    {
        ui->comboBoxRange->setCurrentIndex(4);
    }
    if(temp.contains("R6"))
    {
        ui->comboBoxRange->setCurrentIndex(5);
    }
    if(temp.contains("R7"))
    {
        ui->comboBoxRange->setCurrentIndex(6);
    }
    if(temp.contains("R8"))
    {
        ui->comboBoxRange->setCurrentIndex(7);
    }
    if(temp.contains("R9"))
    {
        ui->comboBoxRange->setCurrentIndex(8);
    }

    temp = checkResult.at(1);
    if(temp.contains("F1"))
    {
        QColor col = QColor(Qt::green);
        if(col.isValid()) {
            QString qss = QString("background-color: %1").arg(col.name());
            ui->pushButtonSlow->setStyleSheet(qss);
        }
    }
    if(temp.contains("F0"))
    {
        QColor col = QColor(Qt::green);
        if(col.isValid()) {
            QString qss = QString("background-color: %1").arg(col.name());
            ui->pushButtonFast->setStyleSheet(qss);
        }
    }

    temp = checkResult.at(2);
    if(temp.contains("I0"))
    {
        QColor col = QColor(Qt::green);
        if(col.isValid()) {
            QString qss = QString("background-color: %1").arg(col.name());
            ui->pushButtonNullOff->setStyleSheet(qss);
        }
    }
    if(temp.contains("I1"))
    {
        QColor col = QColor(Qt::green);
        if(col.isValid()) {
            QString qss = QString("background-color: %1").arg(col.name());
            ui->pushButtonNullOn->setStyleSheet(qss);
        }
    }

    temp =checkResult.at(3);
    if(temp.contains("C0"))
    {
        QColor col = QColor(Qt::green);
        if(col.isValid()) {
            QString qss = QString("background-color: %1").arg(col.name());
            ui->pushButtonCompareOff->setStyleSheet(qss);
        }
    }
    if(temp.contains("C1"))
    {
        QColor col = QColor(Qt::green);
        if(col.isValid()) {
            QString qss = QString("background-color: %1").arg(col.name());
            ui->pushButtonCompareOnGo->setStyleSheet(qss);
        }
    }
    if(temp.contains("C2"))
    {
        QColor col = QColor(Qt::green);
        if(col.isValid()) {
            QString qss = QString("background-color: %1").arg(col.name());
            ui->pushButtonCompareOnNogo->setStyleSheet(qss);
        }
    }
}

void MainWindow::on_pushButton_clicked()
{
    graphs.setWindowTitle("feel yourself as a guard");
    graphs.show();
}

void MainWindow::on_pushButtonConnect_2_clicked()
{
    ui->lineEditCommand_2->setText("Enter your message here!");

    if (ui->pushButtonConnect_2->text() == "Connect")
    {
        emit requestConnectAvr(ui->comboBoxPortName_2->currentText());
    } else
    {
        emit requestDisconnectAvr();
    }
}

void MainWindow::on_pushButtonSend_2_clicked()
{
    emit requestSendAndReadAvr(ui->lineEditCommand_2->text());
    return;
}
