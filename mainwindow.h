#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

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
    QSerialPort *serial;
    QTime time;

private slots:
    void on_actionComUpd_triggered();
    void on_pushButtonConnect_clicked();

    void printMsg(const QString &s);

    void on_pushButtonSend_clicked();

    void on_pushButtonRecieve_clicked();


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

signals:
    void msg(const QString &s);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
