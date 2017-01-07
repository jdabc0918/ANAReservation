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

	//	日付を出力する
	void PrintDate(QDate date);

	//	プッシュボタンを初期化する
	void InitPushButtons();

	public slots:
};

#endif // MAINWINDOW_H
