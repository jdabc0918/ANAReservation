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
#include <QtWidgets/QLabel>
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
    QLabel *Tabiwari75DateLabel;
    QLabel *PriorityDateLabel;
    QLabel *NormalDateLabel;
    QLabel *ReservationDateLabel;
    QLabel *Tabiwari75Label;
    QLabel *PriorityLabel;
    QLabel *NormalLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mainWindowClass)
    {
        if (mainWindowClass->objectName().isEmpty())
            mainWindowClass->setObjectName(QStringLiteral("mainWindowClass"));
        mainWindowClass->resize(770, 450);
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
        Tabiwari75DateLabel = new QLabel(centralWidget);
        Tabiwari75DateLabel->setObjectName(QStringLiteral("Tabiwari75DateLabel"));
        Tabiwari75DateLabel->setGeometry(QRect(470, 130, 281, 60));
        QFont font;
        font.setFamily(QStringLiteral("Meiryo UI"));
        font.setPointSize(36);
        Tabiwari75DateLabel->setFont(font);
        PriorityDateLabel = new QLabel(centralWidget);
        PriorityDateLabel->setObjectName(QStringLiteral("PriorityDateLabel"));
        PriorityDateLabel->setGeometry(QRect(470, 210, 281, 60));
        PriorityDateLabel->setFont(font);
        NormalDateLabel = new QLabel(centralWidget);
        NormalDateLabel->setObjectName(QStringLiteral("NormalDateLabel"));
        NormalDateLabel->setGeometry(QRect(470, 290, 281, 60));
        NormalDateLabel->setFont(font);
        ReservationDateLabel = new QLabel(centralWidget);
        ReservationDateLabel->setObjectName(QStringLiteral("ReservationDateLabel"));
        ReservationDateLabel->setGeometry(QRect(350, 90, 111, 31));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        ReservationDateLabel->setPalette(palette);
        QFont font1;
        font1.setFamily(QStringLiteral("Meiryo UI"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        ReservationDateLabel->setFont(font1);
        Tabiwari75Label = new QLabel(centralWidget);
        Tabiwari75Label->setObjectName(QStringLiteral("Tabiwari75Label"));
        Tabiwari75Label->setGeometry(QRect(350, 130, 111, 60));
        QFont font2;
        font2.setFamily(QStringLiteral("Meiryo UI"));
        font2.setPointSize(16);
        Tabiwari75Label->setFont(font2);
        PriorityLabel = new QLabel(centralWidget);
        PriorityLabel->setObjectName(QStringLiteral("PriorityLabel"));
        PriorityLabel->setGeometry(QRect(350, 210, 121, 60));
        PriorityLabel->setFont(font2);
        NormalLabel = new QLabel(centralWidget);
        NormalLabel->setObjectName(QStringLiteral("NormalLabel"));
        NormalLabel->setGeometry(QRect(350, 290, 111, 60));
        NormalLabel->setFont(font2);
        mainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mainWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 770, 21));
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
        mainWindowClass->setWindowTitle(QApplication::translate("mainWindowClass", "ANA Reservation", Q_NULLPTR));
        BronzeButton->setText(QString());
        SFCButton->setText(QString());
        PlatinumButton->setText(QString());
        DiamondButton->setText(QString());
        Tabiwari75DateLabel->setText(QApplication::translate("mainWindowClass", "1990/01/01", Q_NULLPTR));
        PriorityDateLabel->setText(QApplication::translate("mainWindowClass", "1990/01/01", Q_NULLPTR));
        NormalDateLabel->setText(QApplication::translate("mainWindowClass", "1990/01/01", Q_NULLPTR));
        ReservationDateLabel->setText(QApplication::translate("mainWindowClass", "\344\272\210\347\264\204\351\226\213\345\247\213\346\227\245", Q_NULLPTR));
        Tabiwari75Label->setText(QApplication::translate("mainWindowClass", "\346\227\205\345\211\26275", Q_NULLPTR));
        PriorityLabel->setText(QApplication::translate("mainWindowClass", "2\351\200\261\351\226\223\345\211\215", Q_NULLPTR));
        NormalLabel->setText(QApplication::translate("mainWindowClass", "\351\200\232\345\270\270", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainWindowClass: public Ui_mainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
