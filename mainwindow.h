#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include "e6_25.h"
#include <QThread>
#include <QTime>
#include "graphswindow.h"
#include "atmega8.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    GraphsWindow graphs;
    bool multiMode = false;
    ~MainWindow();

private:
    E6_25 *device;
    Atmega8 *avr;
    QThread *tred;
    QThread *avrtred;

private slots:
    void setupRange();
    void on_actionComUpd_triggered();
    void on_pushButtonConnect_clicked();
    void afterConnect();
    void afterDisconnect();
    void afterConnectAvr();
    void afterDisconnectAvr();
    void printMsg(const QString &s);
    void printMsgAvr(const QString &s);
    void on_pushButtonSend_clicked();
    void on_pushButtonRecieve_clicked();
    void on_pushButtonRecieve_2_clicked();
    void on_pushButtonControlOn_clicked();
    void on_pushButtonControlOff_clicked();
    void closeEvent(QCloseEvent *event);
    void on_pushButtonPlot_clicked();
    void afterStop();
    void updateGraph(double resistance, double time, int fiberNumber);

    void on_pushButtonFast_clicked();

    void on_pushButtonSlow_clicked();

    void on_pushButtonCompareOnGo_clicked();

    void on_pushButtonCompareOnNogo_clicked();

    void on_pushButtonNullOn_clicked();

    void on_pushButtonNullOff_clicked();

    void on_pushButtonCompareOff_clicked();

    void on_pushButtonRange_clicked();

    void on_pushButtonCheck_clicked();
    void afterCheck(QStringList checkResult);

    void on_pushButton_clicked();

    void on_pushButtonConnect_2_clicked();

    void on_pushButtonSend_2_clicked();

signals:
    void msg(const QString &s);
    void requestConnect(QString portName);
    void requestConnectAvr(QString portName);
    void requestDisconnect();
    void requestDisconnectAvr();
    void requestSendAndRead(QString msg);
    void requestSendAndReadAvr(QString msg);
    void requestPlot();
    void requestPlotStop();
    void requestCheck();
    void requestAvrPlot();
    void requestAvrPlotStop();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
