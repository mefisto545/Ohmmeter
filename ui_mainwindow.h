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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
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
    QPushButton *pushButtonCheck;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBoxPortName;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButtonConnect;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonControlOn;
    QPushButton *pushButtonControlOff;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *lineEditCommand;
    QPushButton *pushButtonSend;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *lineEditResponce;
    QPushButton *pushButtonRecieve;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *pushButtonFast;
    QPushButton *pushButtonSlow;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QPushButton *pushButtonCompareOnGo;
    QPushButton *pushButtonCompareOnNogo;
    QPushButton *pushButtonCompareOff;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QPushButton *pushButtonNullOn;
    QPushButton *pushButtonNullOff;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QComboBox *comboBoxRange;
    QPushButton *pushButtonRange;
    QPushButton *pushButtonPlot;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QComboBox *comboBoxPortName_2;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButtonConnect_2;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_14;
    QLineEdit *lineEditCommand_2;
    QPushButton *pushButtonSend_2;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_15;
    QLineEdit *lineEditResponce_2;
    QPushButton *pushButtonRecieve_2;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuAddons;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1009, 549);
        actionComUpd = new QAction(MainWindow);
        actionComUpd->setObjectName(QStringLiteral("actionComUpd"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widgetPlot = new QCustomPlot(centralWidget);
        widgetPlot->setObjectName(QStringLiteral("widgetPlot"));
        widgetPlot->setGeometry(QRect(340, 10, 641, 411));
        pushButtonCheck = new QPushButton(centralWidget);
        pushButtonCheck->setObjectName(QStringLiteral("pushButtonCheck"));
        pushButtonCheck->setGeometry(QRect(10, 430, 80, 25));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 321, 411));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
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


        verticalLayout_3->addLayout(horizontalLayout_12);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButtonControlOn = new QPushButton(layoutWidget);
        pushButtonControlOn->setObjectName(QStringLiteral("pushButtonControlOn"));

        verticalLayout_2->addWidget(pushButtonControlOn);

        pushButtonControlOff = new QPushButton(layoutWidget);
        pushButtonControlOff->setObjectName(QStringLiteral("pushButtonControlOff"));

        verticalLayout_2->addWidget(pushButtonControlOff);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        lineEditCommand = new QLineEdit(layoutWidget);
        lineEditCommand->setObjectName(QStringLiteral("lineEditCommand"));

        horizontalLayout_10->addWidget(lineEditCommand);

        pushButtonSend = new QPushButton(layoutWidget);
        pushButtonSend->setObjectName(QStringLiteral("pushButtonSend"));

        horizontalLayout_10->addWidget(pushButtonSend);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        lineEditResponce = new QLineEdit(layoutWidget);
        lineEditResponce->setObjectName(QStringLiteral("lineEditResponce"));

        horizontalLayout_11->addWidget(lineEditResponce);

        pushButtonRecieve = new QPushButton(layoutWidget);
        pushButtonRecieve->setObjectName(QStringLiteral("pushButtonRecieve"));

        horizontalLayout_11->addWidget(pushButtonRecieve);


        verticalLayout->addLayout(horizontalLayout_11);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        pushButtonFast = new QPushButton(layoutWidget);
        pushButtonFast->setObjectName(QStringLiteral("pushButtonFast"));

        horizontalLayout_3->addWidget(pushButtonFast);

        pushButtonSlow = new QPushButton(layoutWidget);
        pushButtonSlow->setObjectName(QStringLiteral("pushButtonSlow"));

        horizontalLayout_3->addWidget(pushButtonSlow);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        pushButtonCompareOnGo = new QPushButton(layoutWidget);
        pushButtonCompareOnGo->setObjectName(QStringLiteral("pushButtonCompareOnGo"));

        horizontalLayout_2->addWidget(pushButtonCompareOnGo);

        pushButtonCompareOnNogo = new QPushButton(layoutWidget);
        pushButtonCompareOnNogo->setObjectName(QStringLiteral("pushButtonCompareOnNogo"));

        horizontalLayout_2->addWidget(pushButtonCompareOnNogo);

        pushButtonCompareOff = new QPushButton(layoutWidget);
        pushButtonCompareOff->setObjectName(QStringLiteral("pushButtonCompareOff"));

        horizontalLayout_2->addWidget(pushButtonCompareOff);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        pushButtonNullOn = new QPushButton(layoutWidget);
        pushButtonNullOn->setObjectName(QStringLiteral("pushButtonNullOn"));

        horizontalLayout_4->addWidget(pushButtonNullOn);

        pushButtonNullOff = new QPushButton(layoutWidget);
        pushButtonNullOff->setObjectName(QStringLiteral("pushButtonNullOff"));

        horizontalLayout_4->addWidget(pushButtonNullOff);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        comboBoxRange = new QComboBox(layoutWidget);
        comboBoxRange->setObjectName(QStringLiteral("comboBoxRange"));

        horizontalLayout_5->addWidget(comboBoxRange);

        pushButtonRange = new QPushButton(layoutWidget);
        pushButtonRange->setObjectName(QStringLiteral("pushButtonRange"));

        horizontalLayout_5->addWidget(pushButtonRange);


        verticalLayout_3->addLayout(horizontalLayout_5);

        pushButtonPlot = new QPushButton(layoutWidget);
        pushButtonPlot->setObjectName(QStringLiteral("pushButtonPlot"));

        verticalLayout_3->addWidget(pushButtonPlot);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(100, 420, 360, 83));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_5->addWidget(label_7);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        comboBoxPortName_2 = new QComboBox(verticalLayoutWidget_2);
        comboBoxPortName_2->setObjectName(QStringLiteral("comboBoxPortName_2"));

        horizontalLayout_6->addWidget(comboBoxPortName_2);


        horizontalLayout_13->addLayout(horizontalLayout_6);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        pushButtonConnect_2 = new QPushButton(verticalLayoutWidget_2);
        pushButtonConnect_2->setObjectName(QStringLiteral("pushButtonConnect_2"));

        verticalLayout_6->addWidget(pushButtonConnect_2);


        horizontalLayout_13->addLayout(verticalLayout_6);


        horizontalLayout_7->addLayout(horizontalLayout_13);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        lineEditCommand_2 = new QLineEdit(verticalLayoutWidget_2);
        lineEditCommand_2->setObjectName(QStringLiteral("lineEditCommand_2"));

        horizontalLayout_14->addWidget(lineEditCommand_2);

        pushButtonSend_2 = new QPushButton(verticalLayoutWidget_2);
        pushButtonSend_2->setObjectName(QStringLiteral("pushButtonSend_2"));

        horizontalLayout_14->addWidget(pushButtonSend_2);


        verticalLayout_8->addLayout(horizontalLayout_14);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        lineEditResponce_2 = new QLineEdit(verticalLayoutWidget_2);
        lineEditResponce_2->setObjectName(QStringLiteral("lineEditResponce_2"));

        horizontalLayout_15->addWidget(lineEditResponce_2);

        pushButtonRecieve_2 = new QPushButton(verticalLayoutWidget_2);
        pushButtonRecieve_2->setObjectName(QStringLiteral("pushButtonRecieve_2"));

        horizontalLayout_15->addWidget(pushButtonRecieve_2);


        verticalLayout_7->addLayout(horizontalLayout_15);


        verticalLayout_8->addLayout(verticalLayout_7);


        horizontalLayout_7->addLayout(verticalLayout_8);


        verticalLayout_5->addLayout(horizontalLayout_7);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 460, 81, 31));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 490, 91, 21));
        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        widgetPlot->raise();
        pushButtonCheck->raise();
        verticalLayoutWidget_2->raise();
        pushButton->raise();
        checkBox->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1009, 21));
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
        pushButtonCheck->setText(QApplication::translate("MainWindow", "Check", 0));
        label->setText(QApplication::translate("MainWindow", "PortName", 0));
        pushButtonConnect->setText(QApplication::translate("MainWindow", "Connect", 0));
        pushButtonControlOn->setText(QApplication::translate("MainWindow", "Start remote control", 0));
        pushButtonControlOff->setText(QApplication::translate("MainWindow", "Finish remote control", 0));
        pushButtonSend->setText(QApplication::translate("MainWindow", "Send", 0));
        pushButtonRecieve->setText(QApplication::translate("MainWindow", "Recieve", 0));
        label_3->setText(QApplication::translate("MainWindow", "Measurement rate", 0));
        pushButtonFast->setText(QApplication::translate("MainWindow", "Fast", 0));
        pushButtonSlow->setText(QApplication::translate("MainWindow", "Slow", 0));
        label_2->setText(QApplication::translate("MainWindow", "Compare", 0));
        pushButtonCompareOnGo->setText(QApplication::translate("MainWindow", "On go", 0));
        pushButtonCompareOnNogo->setText(QApplication::translate("MainWindow", "On nogo", 0));
        pushButtonCompareOff->setText(QApplication::translate("MainWindow", "Off", 0));
        label_4->setText(QApplication::translate("MainWindow", "Null", 0));
        pushButtonNullOn->setText(QApplication::translate("MainWindow", "On", 0));
        pushButtonNullOff->setText(QApplication::translate("MainWindow", "Off", 0));
        label_6->setText(QApplication::translate("MainWindow", "Range", 0));
        pushButtonRange->setText(QApplication::translate("MainWindow", "Change", 0));
        pushButtonPlot->setText(QApplication::translate("MainWindow", "Plot", 0));
        label_7->setText(QApplication::translate("MainWindow", "                                              AVR Atmega8", 0));
        label_5->setText(QApplication::translate("MainWindow", "PortName", 0));
        pushButtonConnect_2->setText(QApplication::translate("MainWindow", "Connect", 0));
        pushButtonSend_2->setText(QApplication::translate("MainWindow", "Send", 0));
        pushButtonRecieve_2->setText(QApplication::translate("MainWindow", "Recieve", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Open graphs", 0));
        checkBox->setText(QApplication::translate("MainWindow", "Use MultiMode", 0));
        menuAddons->setTitle(QApplication::translate("MainWindow", "Optional", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
