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
