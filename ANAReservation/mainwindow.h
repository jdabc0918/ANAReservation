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

	//	���t���o�͂���
	void PrintDate(QDate date);

	//	�v�b�V���{�^��������������
	void InitPushButtons();

	public slots:
};

#endif // MAINWINDOW_H
