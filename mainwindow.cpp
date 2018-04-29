#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    device = new E6_25();
    tred = new QThread(this);

    connect(device, SIGNAL(responce(QString)), this, SLOT(printMsg(QString)));
    connect(this, SIGNAL(requestConnect(QString)), device, SLOT(connect(QString)));
    connect(this, SIGNAL(requestDisconnect()), device, SLOT(disconnect()));
    connect(this, SIGNAL(requestSendAndRead(QString)), device, SLOT(sendAndRead(QString)));
    connect(this, SIGNAL(requestPlot()), device, SLOT(plotStart()));
    connect(this, SIGNAL(requestPlotStop()), device, SLOT(plotStop()));
    connect(device, SIGNAL(connected()), this, SLOT(afterConnect()));
    connect(device, SIGNAL(disconnected()), this, SLOT(afterDisconnect()));
    connect(device, SIGNAL(graphData(double,double)), this, SLOT(updateGraph(double,double)));
    connect(device, SIGNAL(plotStopped()), this, SLOT(afterStop()));
    connect(tred, SIGNAL(started()), device, SLOT(onCreation()));




    device->moveToThread(tred);
    tred->start();



    on_actionComUpd_triggered();

    ui->pushButtonSend->setDisabled(true);
    ui->pushButtonRecieve->setDisabled(true);

    ui->lineEditResponce->setText("Hello there!");

    ui->lineEditCommand->setDisabled(true);
    ui->lineEditResponce->setDisabled(true);

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
    QMainWindow::closeEvent(event);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionComUpd_triggered()
{
    ui->comboBoxPortName->clear();

    foreach (const QSerialPortInfo &info,
             QSerialPortInfo::availablePorts()) {
        ui->comboBoxPortName->addItem(info.portName());
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

void MainWindow::afterDisconnect()
{
    ui->pushButtonConnect->setText("Connect");

    ui->comboBoxPortName->setEnabled(true);

    ui->lineEditCommand->setEnabled(false);
    ui->lineEditResponce->setEnabled(false);

    ui->pushButtonRecieve->setEnabled(false);
    ui->pushButtonSend->setEnabled(false);
}

void MainWindow::printMsg(const QString &s)
{
    ui->lineEditResponce->setText(s);
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



void MainWindow::on_pushButton_clicked()
{
    emit requestSendAndRead("[+]");
}

void MainWindow::on_pushButton_2_clicked()
{
    emit requestSendAndRead("[-]");
}

void MainWindow::on_pushButtonPlot_clicked()
{
    if(ui->pushButtonPlot->text() == "Plot")
    {
        ui->widgetPlot->graph(0)->data().data()->clear();
        emit requestPlot();
        ui->pushButtonPlot->setText("Stop");
    } else
    {
        emit requestPlotStop();
    }
}

void MainWindow::afterStop()
{
    ui->pushButtonPlot->setText("Plot");
}

void MainWindow::updateGraph(double resistance, double time)
{
    ui->widgetPlot->graph(0)->addData(time,resistance);
    ui->widgetPlot->yAxis->setRange(0, 1);
    ui->widgetPlot->rescaleAxes();
    ui->widgetPlot->yAxis->scaleRange(1.1);
    ui->widgetPlot->replot();
}

void MainWindow::on_pushButtonFast_clicked()
{
    emit requestSendAndRead("[F0]");
}

void MainWindow::on_pushButtonSlow_clicked()
{
    emit requestSendAndRead("[F1]");
}

void MainWindow::on_pushButton_3_clicked()
{
    emit requestSendAndRead("[C1]");
}

void MainWindow::on_pushButton_4_clicked()
{
    emit requestSendAndRead("[C2]");
}

void MainWindow::on_pushButton_5_clicked()
{
    emit requestSendAndRead("[I1]");
}

void MainWindow::on_pushButton_6_clicked()
{
    emit requestSendAndRead("[I0]");
}

void MainWindow::on_pushButton_17_clicked()
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
