#include "graphswindow.h"
#include "ui_graphswindow.h"

GraphsWindow::GraphsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GraphsWindow)
{
    ui->setupUi(this);
    ui->fiber1->addGraph();
    ui->fiber2->addGraph();
    ui->fiber3->addGraph();
    ui->fiber4->addGraph();
    ui->fiber5->addGraph();
    ui->fiber6->addGraph();
    ui->fiber7->addGraph();
    ui->fiber8->addGraph();
    ui->fiber9->addGraph();
    ui->fiber10->addGraph();
    ui->fiber11->addGraph();
    ui->fiber12->addGraph();
    ui->fiber13->addGraph();
    ui->fiber14->addGraph();
    ui->fiber15->addGraph();
    ui->fiber16->addGraph();
    ui->fiber17->addGraph();
    ui->fiber18->addGraph();
    ui->fiber19->addGraph();
    ui->fiber20->addGraph();

}

GraphsWindow::~GraphsWindow()
{
    delete ui;
}

void GraphsWindow::updateGraphs(double resistance, double time, int fiberNumber)
{
    switch (fiberNumber)
    {
    case 1:
        ui->fiber1->graph(0)->addData(time,resistance);
        ui->fiber1->rescaleAxes();
        ui->fiber1->yAxis->scaleRange(1.1);
        ui->fiber1->replot();
        break;
    case 2:
        ui->fiber2->graph(0)->addData(time,resistance);
        ui->fiber2->rescaleAxes();
        ui->fiber2->yAxis->scaleRange(1.1);
        ui->fiber2->replot();
        break;
    case 3:
        ui->fiber3->graph(0)->addData(time,resistance);
        ui->fiber3->rescaleAxes();
        ui->fiber3->yAxis->scaleRange(1.1);
        ui->fiber3->replot();
        break;
    case 4:
        ui->fiber4->graph(0)->addData(time,resistance);
        ui->fiber4->rescaleAxes();
        ui->fiber4->yAxis->scaleRange(1.1);
        ui->fiber4->replot();
        break;
    case 5:
        ui->fiber5->graph(0)->addData(time,resistance);
        ui->fiber5->rescaleAxes();
        ui->fiber5->yAxis->scaleRange(1.1);
        ui->fiber5->replot();
        break;
    case 6:
        ui->fiber6->graph(0)->addData(time,resistance);
        ui->fiber6->rescaleAxes();
        ui->fiber6->yAxis->scaleRange(1.1);
        ui->fiber6->replot();
        break;
    case 7:
        ui->fiber7->graph(0)->addData(time,resistance);
        ui->fiber7->rescaleAxes();
        ui->fiber7->yAxis->scaleRange(1.1);
        ui->fiber7->replot();
        break;
    case 8:
        ui->fiber8->graph(0)->addData(time,resistance);
        ui->fiber8->rescaleAxes();
        ui->fiber8->yAxis->scaleRange(1.1);
        ui->fiber8->replot();
        break;
    case 9:
        ui->fiber9->graph(0)->addData(time,resistance);
        ui->fiber9->rescaleAxes();
        ui->fiber9->yAxis->scaleRange(1.1);
        ui->fiber9->replot();
        break;
    case 10:
        ui->fiber10->graph(0)->addData(time,resistance);
        ui->fiber10->rescaleAxes();
        ui->fiber10->yAxis->scaleRange(1.1);
        ui->fiber10->replot();
        break;
    case 11:
        ui->fiber11->graph(0)->addData(time,resistance);
        ui->fiber11->rescaleAxes();
        ui->fiber11->yAxis->scaleRange(1.1);
        ui->fiber11->replot();
        break;
    case 12:
        ui->fiber12->graph(0)->addData(time,resistance);
        ui->fiber12->rescaleAxes();
        ui->fiber12->yAxis->scaleRange(1.1);
        ui->fiber12->replot();
        break;
    case 13:
        ui->fiber13->graph(0)->addData(time,resistance);
        ui->fiber13->rescaleAxes();
        ui->fiber13->yAxis->scaleRange(1.1);
        ui->fiber13->replot();
        break;
    case 14:
        ui->fiber14->graph(0)->addData(time,resistance);
        ui->fiber14->rescaleAxes();
        ui->fiber14->yAxis->scaleRange(1.1);
        ui->fiber14->replot();
        break;
    case 15:
        ui->fiber15->graph(0)->addData(time,resistance);
        ui->fiber15->rescaleAxes();
        ui->fiber15->yAxis->scaleRange(1.1);
        ui->fiber15->replot();
        break;
    case 16:
        ui->fiber16->graph(0)->addData(time,resistance);
        ui->fiber16->rescaleAxes();
        ui->fiber16->yAxis->scaleRange(1.1);
        ui->fiber16->replot();
        break;
    case 17:
        ui->fiber17->graph(0)->addData(time,resistance);
        ui->fiber17->rescaleAxes();
        ui->fiber17->yAxis->scaleRange(1.1);
        ui->fiber17->replot();
        break;
    case 18:
        ui->fiber18->graph(0)->addData(time,resistance);
        ui->fiber18->rescaleAxes();
        ui->fiber18->yAxis->scaleRange(1.1);
        ui->fiber18->replot();
        break;
    case 19:
        ui->fiber19->graph(0)->addData(time,resistance);
        ui->fiber19->rescaleAxes();
        ui->fiber19->yAxis->scaleRange(1.1);
        ui->fiber19->replot();
        break;
    case 20:
        ui->fiber20->graph(0)->addData(time,resistance);
        ui->fiber20->rescaleAxes();
        ui->fiber20->yAxis->scaleRange(1.1);
        ui->fiber20->replot();
        break;
    }
}

void GraphsWindow::clear()
{
    ui->fiber1->graph(0)->data().data()->clear();
    ui->fiber2->graph(0)->data().data()->clear();
    ui->fiber3->graph(0)->data().data()->clear();
    ui->fiber4->graph(0)->data().data()->clear();
    ui->fiber5->graph(0)->data().data()->clear();
    ui->fiber6->graph(0)->data().data()->clear();
    ui->fiber7->graph(0)->data().data()->clear();
    ui->fiber8->graph(0)->data().data()->clear();
    ui->fiber9->graph(0)->data().data()->clear();
    ui->fiber10->graph(0)->data().data()->clear();
    ui->fiber11->graph(0)->data().data()->clear();
    ui->fiber12->graph(0)->data().data()->clear();
    ui->fiber13->graph(0)->data().data()->clear();
    ui->fiber14->graph(0)->data().data()->clear();
    ui->fiber15->graph(0)->data().data()->clear();
    ui->fiber16->graph(0)->data().data()->clear();
    ui->fiber17->graph(0)->data().data()->clear();
    ui->fiber18->graph(0)->data().data()->clear();
    ui->fiber19->graph(0)->data().data()->clear();
    ui->fiber20->graph(0)->data().data()->clear();
}
