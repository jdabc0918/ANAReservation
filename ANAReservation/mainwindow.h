#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include "ui_mainwindow.h"

#include "CommonHeader.h"

class mainWindow : public QMainWindow
{
	Q_OBJECT

public:
	mainWindow(QWidget *parent = 0);
	~mainWindow();

private:
	Ui::mainWindowClass ui;
	PushButtonHandler m_bHandler;

	//	プッシュボタンを初期化する
	void InitPushButtons();

	//	カレンダーを初期化する
	void InitCalenderWidget();

	public slots:
	void sl_ButtonClicked();
	void sl_UpdateReservationDate();
};

#endif // MAINWINDOW_H
