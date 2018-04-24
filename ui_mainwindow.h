/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionComUpd;
    QWidget *centralWidget;
    QCustomPlot *widgetPlot;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *pushButtonFast;
    QPushButton *pushButtonSlow;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBoxPortName;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButtonConnect;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *lineEditCommand;
    QPushButton *pushButtonSend;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *lineEditResponce;
    QPushButton *pushButtonRecieve;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButtonPlot;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_17;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuAddons;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1041, 582);
        actionComUpd = new QAction(MainWindow);
        actionComUpd->setObjectName(QStringLiteral("actionComUpd"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widgetPlot = new QCustomPlot(centralWidget);
        widgetPlot->setObjectName(QStringLiteral("widgetPlot"));
        widgetPlot->setGeometry(QRect(300, 10, 661, 521));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 200, 252, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        pushButtonFast = new QPushButton(horizontalLayoutWidget);
        pushButtonFast->setObjectName(QStringLiteral("pushButtonFast"));

        horizontalLayout_3->addWidget(pushButtonFast);

        pushButtonSlow = new QPushButton(horizontalLayoutWidget);
        pushButtonSlow->setObjectName(QStringLiteral("pushButtonSlow"));

        horizontalLayout_3->addWidget(pushButtonSlow);

        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 241, 41));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBoxPortName = new QComboBox(layoutWidget);
        comboBoxPortName->setObjectName(QStringLiteral("comboBoxPortName"));

        horizontalLayout->addWidget(comboBoxPortName);


        horizontalLayout_12->addLayout(horizontalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        pushButtonConnect = new QPushButton(layoutWidget);
        pushButtonConnect->setObjectName(QStringLiteral("pushButtonConnect"));

        verticalLayout_4->addWidget(pushButtonConnect);


        horizontalLayout_12->addLayout(verticalLayout_4);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 130, 251, 63));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        lineEditCommand = new QLineEdit(layoutWidget1);
        lineEditCommand->setObjectName(QStringLiteral("lineEditCommand"));

        horizontalLayout_10->addWidget(lineEditCommand);

        pushButtonSend = new QPushButton(layoutWidget1);
        pushButtonSend->setObjectName(QStringLiteral("pushButtonSend"));

        horizontalLayout_10->addWidget(pushButtonSend);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        lineEditResponce = new QLineEdit(layoutWidget1);
        lineEditResponce->setObjectName(QStringLiteral("lineEditResponce"));

        horizontalLayout_11->addWidget(lineEditResponce);

        pushButtonRecieve = new QPushButton(layoutWidget1);
        pushButtonRecieve->setObjectName(QStringLiteral("pushButtonRecieve"));

        horizontalLayout_11->addWidget(pushButtonRecieve);


        verticalLayout->addLayout(horizontalLayout_11);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 60, 221, 61));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButtonPlot = new QPushButton(centralWidget);
        pushButtonPlot->setObjectName(QStringLiteral("pushButtonPlot"));
        pushButtonPlot->setGeometry(QRect(20, 500, 231, 41));
        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 250, 288, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        pushButton_3 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_17 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));

        horizontalLayout_2->addWidget(pushButton_17);

        horizontalLayoutWidget_3 = new QWidget(centralWidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 290, 251, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        pushButton_5 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_4->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_4->addWidget(pushButton_6);

        formLayoutWidget = new QWidget(centralWidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(60, 330, 161, 171));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, label_5);

        pushButton_7 = new QPushButton(formLayoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButton_7);

        pushButton_8 = new QPushButton(formLayoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton_8);

        pushButton_9 = new QPushButton(formLayoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButton_9);

        pushButton_10 = new QPushButton(formLayoutWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton_10);

        pushButton_11 = new QPushButton(formLayoutWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        formLayout->setWidget(3, QFormLayout::LabelRole, pushButton_11);

        pushButton_12 = new QPushButton(formLayoutWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        formLayout->setWidget(3, QFormLayout::FieldRole, pushButton_12);

        pushButton_13 = new QPushButton(formLayoutWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));

        formLayout->setWidget(4, QFormLayout::LabelRole, pushButton_13);

        pushButton_14 = new QPushButton(formLayoutWidget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));

        formLayout->setWidget(4, QFormLayout::FieldRole, pushButton_14);

        pushButton_15 = new QPushButton(formLayoutWidget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, pushButton_15);

        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        layoutWidget1->raise();
        layoutWidget2->raise();
        widgetPlot->raise();
        horizontalLayoutWidget->raise();
        pushButtonPlot->raise();
        horizontalLayoutWidget_2->raise();
        horizontalLayoutWidget_3->raise();
        formLayoutWidget->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1041, 21));
        menuAddons = new QMenu(menuBar);
        menuAddons->setObjectName(QStringLiteral("menuAddons"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuAddons->menuAction());
        menuAddons->addAction(actionComUpd);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionComUpd->setText(QApplication::translate("MainWindow", "ComUpd", 0));
        label_3->setText(QApplication::translate("MainWindow", "Measurement rate", 0));
        pushButtonFast->setText(QApplication::translate("MainWindow", "Fast", 0));
        pushButtonSlow->setText(QApplication::translate("MainWindow", "Slow", 0));
        label->setText(QApplication::translate("MainWindow", "PortName", 0));
        pushButtonConnect->setText(QApplication::translate("MainWindow", "Connect", 0));
        pushButtonSend->setText(QApplication::translate("MainWindow", "Send", 0));
        pushButtonRecieve->setText(QApplication::translate("MainWindow", "Recieve", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Start remote control", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Finish remote control", 0));
        pushButtonPlot->setText(QApplication::translate("MainWindow", "Plot", 0));
        label_2->setText(QApplication::translate("MainWindow", "Compare", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "On go", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "On nogo", 0));
        pushButton_17->setText(QApplication::translate("MainWindow", "Off", 0));
        label_4->setText(QApplication::translate("MainWindow", "Null", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "On", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "Off", 0));
        label_5->setText(QApplication::translate("MainWindow", "                     Range", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "20 m\316\251", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "200 m\316\251", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", "2 \316\251", 0));
        pushButton_10->setText(QApplication::translate("MainWindow", "20 \316\251", 0));
        pushButton_11->setText(QApplication::translate("MainWindow", "200 \316\251", 0));
        pushButton_12->setText(QApplication::translate("MainWindow", "2 k\316\251", 0));
        pushButton_13->setText(QApplication::translate("MainWindow", "20 k\316\251", 0));
        pushButton_14->setText(QApplication::translate("MainWindow", "200 k\316\251", 0));
        pushButton_15->setText(QApplication::translate("MainWindow", "2 M\316\251", 0));
        menuAddons->setTitle(QApplication::translate("MainWindow", "Optional", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
