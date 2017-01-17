#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include <QMouseEvent>
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
	int m_nMouseClick_X_Coordinate;
	int m_nMouseClick_Y_Coordinate;

	//	�v�b�V���{�^��������������
	void InitPushButtons(int init_selected_index);

	//	�J�����_�[������������
	void InitCalenderWidget(QDate init_date);

	//	���t���x�����X�V����
	void UpdateReservationDateLabels(QDate selected_date);

	//
	void mousePressEvent(QMouseEvent* event)
	{
		m_nMouseClick_X_Coordinate = event->x();
		m_nMouseClick_Y_Coordinate = event->y();
	};
	void mouseMoveEvent(QMouseEvent* event)
	{
		move(event->globalX() - m_nMouseClick_X_Coordinate, event->globalY() - m_nMouseClick_Y_Coordinate);
	};

	public slots:
	void sl_ButtonClicked();
	void sl_UpdateReservationDate();
};

#endif // MAINWINDOW_H
