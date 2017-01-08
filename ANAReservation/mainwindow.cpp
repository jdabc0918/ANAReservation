#include "mainwindow.h"

mainWindow::mainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//	�v�b�V���{�^���̏�����
	InitPushButtons();

	//	�J�����_�[�̏�����
	InitCalenderWidget();
}

mainWindow::~mainWindow()
{

}

void mainWindow::InitPushButtons()
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
	m_bHandler.InitButtons(std::vector<myPushButton *>{ ui.BronzeButton, ui.SFCButton, ui.PlatinumButton, ui.DiamondButton});
}

void mainWindow::InitCalenderWidget()
{
#pragma region �R�l�N�g
	QObject::connect(ui.calendarWidget, SIGNAL(selectionChanged()), this, SLOT(sl_UpdateReservationDate()));
#pragma endregion

}

void mainWindow::sl_ButtonClicked()
{
	m_bHandler.UpdateSelection();
	qDebug() << __FUNCTION__ << ": current Index = " << m_bHandler.GetCurrentIndex();
}

void mainWindow::sl_UpdateReservationDate()
{
	qDebug() << __FUNCTION__ << ":" << ui.calendarWidget->selectedDate();
}