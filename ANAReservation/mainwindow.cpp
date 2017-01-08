#include "mainwindow.h"

mainWindow::mainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//	�ݒ�f�[�^�ǂݍ���

	//	�����l�ݒ�
	int init_selected_index = 0;
	QDate init_date = QDate::currentDate();

	//	�v�b�V���{�^���̏�����
	InitPushButtons(init_selected_index);

	//	�J�����_�[�̏�����
	InitCalenderWidget(init_date);
}

mainWindow::~mainWindow()
{

}

void mainWindow::InitPushButtons(int init_selected_index)
{

#pragma region �R�l�N�g
	QObject::connect(ui.BronzeButton, SIGNAL(clicked()), this, SLOT(sl_ButtonClicked()));
	QObject::connect(ui.SFCButton, SIGNAL(clicked()), this, SLOT(sl_ButtonClicked()));
	QObject::connect(ui.PlatinumButton, SIGNAL(clicked()), this, SLOT(sl_ButtonClicked()));
	QObject::connect(ui.DiamondButton, SIGNAL(clicked()), this, SLOT(sl_ButtonClicked()));
#pragma endregion

#pragma region �A�C�R���̓ǂݍ���
	//	�A�C�R���T�C�Y
	QSize iconSize(180 , 65);
	QString iconDir = "icon";
	QPixmap pixmap_default, pixmap_toggled;
	
	//	�u�����Y
	pixmap_default.load(iconDir + "/bronze.png");
	pixmap_toggled.load(iconDir + "/bronze_checked.png");
	ui.BronzeButton->SetIcons(QIcon(pixmap_default), QIcon(pixmap_toggled),iconSize);
	//	SFC
	pixmap_default.load(iconDir + "/sfc.png");
	pixmap_toggled.load(iconDir + "/sfc_checked.png");
	ui.SFCButton->SetIcons(QIcon(pixmap_default), QIcon(pixmap_toggled), iconSize);
	//	�v���`�i
	pixmap_default.load(iconDir + "/platinum.png");
	pixmap_toggled.load(iconDir + "/platinum_checked.png");
	ui.PlatinumButton->SetIcons(QIcon(pixmap_default), QIcon(pixmap_toggled), iconSize);
	//	�_�C�A�����h
	pixmap_default.load(iconDir + "/diamond.png");
	pixmap_toggled.load(iconDir + "/diamond_checked.png");
	ui.DiamondButton->SetIcons(QIcon(pixmap_default), QIcon(pixmap_toggled), iconSize);
#pragma endregion

	//	�n���h���Ƀ{�^����o�^����
	m_bHandler.InitButtons(std::vector<myPushButton *>{ ui.BronzeButton, ui.SFCButton, ui.PlatinumButton, ui.DiamondButton},
		init_selected_index);
}

void mainWindow::InitCalenderWidget(QDate init_date)
{
#pragma region �R�l�N�g
	QObject::connect(ui.calendarWidget, SIGNAL(selectionChanged()), this, SLOT(sl_UpdateReservationDate()));
#pragma endregion

	//	�J�����_�[�̑I�����Z�b�g
	//	hogehoge
	ui.calendarWidget->selectedDate() = init_date;

	//	���x�����X�V
	UpdateReservationDateLabels(init_date);
}

void mainWindow::UpdateReservationDateLabels(QDate selected_date)
{
	QDate tabiwariDate = ANADate::GetReservationDateOf(selected_date, ANADate::RTYPE_TABIWARI75);
	ui.Tabiwari75DateLabel->setText(tabiwariDate.toString("yyyy/MM/dd"));
	QDate priorityDate = ANADate::GetReservationDateOf(selected_date, ANADate::RTYPE_PRIORITY);
	ui.PriorityDateLabel->setText(priorityDate.toString("yyyy/MM/dd"));
	QDate normalDate = ANADate::GetReservationDateOf(selected_date, ANADate::RTYPE_NORMAL);
	ui.NormalDateLabel->setText(normalDate.toString("yyyy/MM/dd"));
}

void mainWindow::sl_ButtonClicked()
{
	m_bHandler.UpdateSelection();
	qDebug() << __FUNCTION__ << ": current Index = " << m_bHandler.GetCurrentIndex();
}

void mainWindow::sl_UpdateReservationDate()
{
	//	�J�����_�[�̓��t���擾����
	QDate selectedDate = ui.calendarWidget->selectedDate();
	qDebug() << __FUNCTION__ << ":" << selectedDate;

	//	���t�ɉ����ă��x�����X�V����
	UpdateReservationDateLabels(selectedDate);
}