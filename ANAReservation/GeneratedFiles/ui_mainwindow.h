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
#include <QtWidgets/QPushButton>
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
    QLabel *ReservationDateLabel;
    QPushButton *ExitButton;

    void setupUi(QMainWindow *mainWindowClass)
    {
        if (mainWindowClass->objectName().isEmpty())
            mainWindowClass->setObjectName(QStringLiteral("mainWindowClass"));
        mainWindowClass->resize(770, 390);
        mainWindowClass->setMinimumSize(QSize(770, 390));
        mainWindowClass->setMaximumSize(QSize(770, 390));
        mainWindowClass->setStyleSheet(QStringLiteral(""));
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
        ReservationDateLabel = new QLabel(centralWidget);
        ReservationDateLabel->setObjectName(QStringLiteral("ReservationDateLabel"));
        ReservationDateLabel->setGeometry(QRect(350, 90, 301, 31));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        ReservationDateLabel->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Meiryo UI"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        ReservationDateLabel->setFont(font);
        ExitButton = new QPushButton(centralWidget);
        ExitButton->setObjectName(QStringLiteral("ExitButton"));
        ExitButton->setGeometry(QRect(730, 350, 30, 30));
        QFont font1;
        font1.setFamily(QStringLiteral("Meiryo UI"));
        ExitButton->setFont(font1);
        ExitButton->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        mainWindowClass->setCentralWidget(centralWidget);

        retranslateUi(mainWindowClass);
        QObject::connect(ExitButton, SIGNAL(clicked()), mainWindowClass, SLOT(close()));

        QMetaObject::connectSlotsByName(mainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *mainWindowClass)
    {
        mainWindowClass->setWindowTitle(QApplication::translate("mainWindowClass", "ANA Reservation", Q_NULLPTR));
        BronzeButton->setText(QString());
        SFCButton->setText(QString());
        PlatinumButton->setText(QString());
        DiamondButton->setText(QString());
        ReservationDateLabel->setText(QApplication::translate("mainWindowClass", "Reservation Date", Q_NULLPTR));
        ExitButton->setText(QApplication::translate("mainWindowClass", "\342\234\226", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainWindowClass: public Ui_mainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
