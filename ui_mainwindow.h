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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionComUpd;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBoxPortName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBoxBaudRate;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *comboBoxParity;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *comboBoxDataBits;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *comboBoxStopBits;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QComboBox *comboBoxFC;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButtonConnect;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QSpinBox *spinBoxTimeout;
    QHBoxLayout *horizontalLayout_9;
    QLabel *labelTTR;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *lineEditCommand;
    QPushButton *pushButtonSend;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *lineEditResponce;
    QPushButton *pushButtonRecieve;
    QWidget *widgetPlot;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBoxRate;
    QMenuBar *menuBar;
    QMenu *menuAddons;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(704, 404);
        actionComUpd = new QAction(MainWindow);
        actionComUpd->setObjectName(QStringLiteral("actionComUpd"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 229, 232));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBoxPortName = new QComboBox(layoutWidget);
        comboBoxPortName->setObjectName(QStringLiteral("comboBoxPortName"));

        horizontalLayout->addWidget(comboBoxPortName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBoxBaudRate = new QComboBox(layoutWidget);
        comboBoxBaudRate->setObjectName(QStringLiteral("comboBoxBaudRate"));

        horizontalLayout_2->addWidget(comboBoxBaudRate);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        comboBoxParity = new QComboBox(layoutWidget);
        comboBoxParity->setObjectName(QStringLiteral("comboBoxParity"));

        horizontalLayout_4->addWidget(comboBoxParity);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        comboBoxDataBits = new QComboBox(layoutWidget);
        comboBoxDataBits->setObjectName(QStringLiteral("comboBoxDataBits"));

        horizontalLayout_5->addWidget(comboBoxDataBits);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        comboBoxStopBits = new QComboBox(layoutWidget);
        comboBoxStopBits->setObjectName(QStringLiteral("comboBoxStopBits"));

        horizontalLayout_6->addWidget(comboBoxStopBits);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        comboBoxFC = new QComboBox(layoutWidget);
        comboBoxFC->setObjectName(QStringLiteral("comboBoxFC"));

        horizontalLayout_7->addWidget(comboBoxFC);


        verticalLayout->addLayout(horizontalLayout_7);


        horizontalLayout_12->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        pushButtonConnect = new QPushButton(layoutWidget);
        pushButtonConnect->setObjectName(QStringLiteral("pushButtonConnect"));

        verticalLayout_4->addWidget(pushButtonConnect);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_8->addWidget(label_9);

        spinBoxTimeout = new QSpinBox(layoutWidget);
        spinBoxTimeout->setObjectName(QStringLiteral("spinBoxTimeout"));
        spinBoxTimeout->setMinimum(1);
        spinBoxTimeout->setMaximum(990);
        spinBoxTimeout->setSingleStep(1);
        spinBoxTimeout->setValue(10);

        horizontalLayout_8->addWidget(spinBoxTimeout);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        labelTTR = new QLabel(layoutWidget);
        labelTTR->setObjectName(QStringLiteral("labelTTR"));

        horizontalLayout_9->addWidget(labelTTR);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_9->addWidget(label_8);


        verticalLayout_2->addLayout(horizontalLayout_9);


        verticalLayout_4->addLayout(verticalLayout_2);


        horizontalLayout_12->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_12);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        lineEditCommand = new QLineEdit(layoutWidget);
        lineEditCommand->setObjectName(QStringLiteral("lineEditCommand"));

        horizontalLayout_10->addWidget(lineEditCommand);

        pushButtonSend = new QPushButton(layoutWidget);
        pushButtonSend->setObjectName(QStringLiteral("pushButtonSend"));

        horizontalLayout_10->addWidget(pushButtonSend);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        lineEditResponce = new QLineEdit(layoutWidget);
        lineEditResponce->setObjectName(QStringLiteral("lineEditResponce"));

        horizontalLayout_11->addWidget(lineEditResponce);

        pushButtonRecieve = new QPushButton(layoutWidget);
        pushButtonRecieve->setObjectName(QStringLiteral("pushButtonRecieve"));

        horizontalLayout_11->addWidget(pushButtonRecieve);


        verticalLayout_3->addLayout(horizontalLayout_11);


        verticalLayout_5->addLayout(verticalLayout_3);

        widgetPlot = new QWidget(centralWidget);
        widgetPlot->setObjectName(QStringLiteral("widgetPlot"));
        widgetPlot->setGeometry(QRect(410, 10, 291, 341));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 270, 111, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 300, 111, 23));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(14, 260, 251, 61));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        comboBoxRate = new QComboBox(horizontalLayoutWidget);
        comboBoxRate->setObjectName(QStringLiteral("comboBoxRate"));

        horizontalLayout_3->addWidget(comboBoxRate);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 704, 21));
        menuAddons = new QMenu(menuBar);
        menuAddons->setObjectName(QStringLiteral("menuAddons"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuAddons->menuAction());
        menuAddons->addAction(actionComUpd);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionComUpd->setText(QApplication::translate("MainWindow", "ComUpd", 0));
        label->setText(QApplication::translate("MainWindow", "PortName", 0));
        label_2->setText(QApplication::translate("MainWindow", "BaudRate", 0));
        label_4->setText(QApplication::translate("MainWindow", "Parity", 0));
        label_5->setText(QApplication::translate("MainWindow", "DataBits", 0));
        label_6->setText(QApplication::translate("MainWindow", "StopBits", 0));
        label_7->setText(QApplication::translate("MainWindow", "FC", 0));
        pushButtonConnect->setText(QApplication::translate("MainWindow", "Connect", 0));
        label_9->setText(QApplication::translate("MainWindow", "Timeout", 0));
        labelTTR->setText(QApplication::translate("MainWindow", "Unknown", 0));
        label_8->setText(QApplication::translate("MainWindow", "TTR", 0));
        pushButtonSend->setText(QApplication::translate("MainWindow", "Send", 0));
        pushButtonRecieve->setText(QApplication::translate("MainWindow", "Recieve", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Start remote control", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Finish remote control", 0));
        label_3->setText(QApplication::translate("MainWindow", "Measurement rate", 0));
        menuAddons->setTitle(QApplication::translate("MainWindow", "Addons", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
