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

    device->moveToThread(tred);
    tred->start();


    QStringList List;

    List.push_back("slow(2 Hz)");
    List.push_back("fast(10 Hz)");
    ui->comboBoxRate->addItems(List);
    List.clear();

    on_actionComUpd_triggered();

    ui->pushButtonSend->setDisabled(true);
    ui->pushButtonRecieve->setDisabled(true);

    ui->lineEditResponce->setText("Hello there!");

    ui->lineEditCommand->setDisabled(true);
    ui->lineEditResponce->setDisabled(true);

    connect(this, SIGNAL(msg(QString)),
            this, SLOT(printMsg(QString)));
}


void MainWindow::closeEvent(QCloseEvent *event)//При закрытии проги
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
