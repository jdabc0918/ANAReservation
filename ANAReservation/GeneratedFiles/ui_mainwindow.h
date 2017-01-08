/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "mypushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_mainWindowClass
{
public:
    QWidget *centralWidget;
    myPushButton *BronzeButton;
    myPushButton *SFCButton;
    myPushButton *PlatinumButton;
    myPushButton *DiamondButton;
    QCalendarWidget *calendarWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mainWindowClass)
    {
        if (mainWindowClass->objectName().isEmpty())
            mainWindowClass->setObjectName(QStringLiteral("mainWindowClass"));
        mainWindowClass->resize(770, 460);
        centralWidget = new QWidget(mainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        BronzeButton = new myPushButton(centralWidget);
        BronzeButton->setObjectName(QStringLiteral("BronzeButton"));
        BronzeButton->setGeometry(QRect(10, 10, 180, 65));
        BronzeButton->setIconSize(QSize(180, 65));
        BronzeButton->setCheckable(true);
        SFCButton = new myPushButton(centralWidget);
        SFCButton->setObjectName(QStringLiteral("SFCButton"));
        SFCButton->setGeometry(QRect(200, 10, 180, 65));
        SFCButton->setIconSize(QSize(180, 65));
        SFCButton->setCheckable(true);
        PlatinumButton = new myPushButton(centralWidget);
        PlatinumButton->setObjectName(QStringLiteral("PlatinumButton"));
        PlatinumButton->setGeometry(QRect(390, 10, 180, 65));
        PlatinumButton->setIconSize(QSize(180, 65));
        PlatinumButton->setCheckable(true);
        DiamondButton = new myPushButton(centralWidget);
        DiamondButton->setObjectName(QStringLiteral("DiamondButton"));
        DiamondButton->setGeometry(QRect(580, 10, 180, 65));
        DiamondButton->setIconSize(QSize(180, 65));
        DiamondButton->setCheckable(true);
        calendarWidget = new QCalendarWidget(centralWidget);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(10, 90, 320, 289));
        mainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mainWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 770, 31));
        mainWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mainWindowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        mainWindowClass->setStatusBar(statusBar);

        retranslateUi(mainWindowClass);

        QMetaObject::connectSlotsByName(mainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *mainWindowClass)
    {
        mainWindowClass->setWindowTitle(QApplication::translate("mainWindowClass", "mainWindow", Q_NULLPTR));
        BronzeButton->setText(QString());
        SFCButton->setText(QString());
        PlatinumButton->setText(QString());
        DiamondButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mainWindowClass: public Ui_mainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
