#ifndef GRAPHSWINDOW_H
#define GRAPHSWINDOW_H

#include <QMainWindow>

namespace Ui {
class GraphsWindow;
}

class GraphsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GraphsWindow(QWidget *parent = 0);
    ~GraphsWindow();
    int fiberNumber = 1;
    void updateGraphs(double resistance, double time, int fiberNumber);

public slots:
    void clear();

private:
    Ui::GraphsWindow *ui;
};

#endif // GRAPHSWINDOW_H
