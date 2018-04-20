#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStringList List;
    List.push_back("9600");
    ui->comboBoxBaudRate->addItems(List);
    List.clear();


    List.push_back("none");

    ui->comboBoxParity->addItems(List);
    List.clear();

    ui->comboBoxDataBits->addItem("8");

    List.push_back("1");

    ui->comboBoxStopBits->addItems(List);
    List.clear();

    List.push_back("no");

    ui->comboBoxFC->addItems(List);
    List.clear();

    List.push_back("slow(2 Hz)");
    List.push_back("fast(10 Hz)");
    ui->comboBoxRate->addItems(List);
    List.clear();

    on_actionComUpd_triggered();

    ui->pushButtonSend->setDisabled(true);
    ui->pushButtonRecieve->setEnabled(false);

    ui->lineEditResponce->setText("Hello there!");

    ui->lineEditCommand->setDisabled(true);
    ui->lineEditResponce->setEnabled(false);

    serial = new QSerialPort();

    connect(this, SIGNAL(msg(QString)),
            this, SLOT(printMsg(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;

    delete serial;
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

    if (ui->pushButtonConnect->text() == "Connect") {
        serial->setPortName(ui->comboBoxPortName->currentText());

        if (ui->comboBoxBaudRate->currentText() == "9600")
            serial->setBaudRate(QSerialPort::Baud9600);
        else
            serial->setBaudRate(ui->comboBoxBaudRate->currentText().toInt());

        serial->setDataBits(QSerialPort::Data8);

        if (ui->comboBoxParity->currentText().toUpper() == "NONE")
            serial->setParity(QSerialPort::NoParity);
        if (ui->comboBoxParity->currentText().toUpper() == "ODD")
            serial->setParity(QSerialPort::OddParity);
        if (ui->comboBoxParity->currentText().toUpper() == "EVEN")
            serial->setParity(QSerialPort::EvenParity);

        if (ui->comboBoxStopBits->currentText() == "1")
            serial->setStopBits(QSerialPort::OneStop);
        if (ui->comboBoxStopBits->currentText() == "2")
            serial->setStopBits(QSerialPort::TwoStop);

        if (ui->comboBoxFC->currentText() == "no")
            serial->setFlowControl(QSerialPort::NoFlowControl);
        if (ui->comboBoxFC->currentText() == "hard")
            serial->setFlowControl(QSerialPort::HardwareControl);
        if (ui->comboBoxFC->currentText() == "soft")
            serial->setFlowControl(QSerialPort::SoftwareControl);

        if (serial->open(QIODevice::ReadWrite) == false) {
            QSerialPort::SerialPortError getError;
            serial->error(getError);

            emit msg("Can't open " +
                     ui->comboBoxPortName->currentText() +
                     ", error code " +
                     QString::number(serial->error()));

                    return;
        }

        ui->pushButtonConnect->setText("Disconnect");

        ui->comboBoxBaudRate->setEnabled(false);
        ui->comboBoxDataBits->setEnabled(false);
        ui->comboBoxFC->setEnabled(false);
        ui->comboBoxParity->setEnabled(false);
        ui->comboBoxPortName->setEnabled(false);
        ui->comboBoxStopBits->setEnabled(false);

        ui->lineEditCommand->setEnabled(true);
        ui->lineEditResponce->setEnabled(true);

        ui->pushButtonRecieve->setEnabled(true);
        ui->pushButtonSend->setEnabled(true);
    } else {
        serial->close();

        ui->pushButtonConnect->setText("Connect");

        ui->comboBoxBaudRate->setEnabled(true);
        ui->comboBoxDataBits->setEnabled(true);
        ui->comboBoxFC->setEnabled(true);
        ui->comboBoxParity->setEnabled(true);
        ui->comboBoxPortName->setEnabled(true);
        ui->comboBoxStopBits->setEnabled(true);

        ui->lineEditCommand->setEnabled(false);
        ui->lineEditResponce->setEnabled(false);

        ui->pushButtonRecieve->setEnabled(false);
        ui->pushButtonSend->setEnabled(false);
    }
}

void MainWindow::printMsg(const QString &s)
{
    ui->lineEditResponce->setText(s);
}

void MainWindow::on_pushButtonSend_clicked()
{
    if (serial->write(ui->lineEditCommand->text().toLocal8Bit()) == -1)
        emit msg("Can't send anything!!!");

    on_pushButtonRecieve_clicked();

    return;
}

void MainWindow::on_pushButtonRecieve_clicked()
{
    QByteArray temp;

    time = QTime(0, 0, 0, 0);
    time.start();

    while(serial->waitForReadyRead(ui->spinBoxTimeout->value())) {
        temp += serial->readAll();
    }

    ui->labelTTR->setText(QString::number(time.elapsed() - 0*ui->spinBoxTimeout->value()));

    emit msg(QString(temp));
}



void MainWindow::on_pushButton_clicked()
{
    serial->write("[+]");
}

void MainWindow::on_pushButton_2_clicked()
{
    serial->write("[-]");
}
