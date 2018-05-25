#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow *w = new MainWindow();
    w->setWindowTitle("E6-25 v0.2.0");
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
    return a.exec();
}
