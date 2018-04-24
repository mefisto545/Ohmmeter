#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include "e6_25.h"
#include <QThread>
#include <QTime>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    E6_25 *device;
    QThread *tred;

private slots:
    void on_actionComUpd_triggered();
    void on_pushButtonConnect_clicked();
    void afterConnect();
    void afterDisconnect();
    void printMsg(const QString &s);
    void on_pushButtonSend_clicked();
    void on_pushButtonRecieve_clicked();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void closeEvent(QCloseEvent *event);
    void on_pushButtonPlot_clicked();
    void afterStop();
    void updateGraph(double resistance, double time);

    void on_pushButtonFast_clicked();

    void on_pushButtonSlow_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

signals:
    void msg(const QString &s);
    void requestConnect(QString portName);
    void requestDisconnect();
    void requestSendAndRead(QString msg);
    void requestPlot();
    void requestPlotStop();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
