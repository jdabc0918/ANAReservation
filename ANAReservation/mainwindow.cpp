#include "mainwindow.h"

mainWindow::mainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//	プッシュボタンの初期化
	InitPushButtons();
}

mainWindow::~mainWindow()
{

}

void mainWindow::InitPushButtons()
{
	
#pragma region コネクト
	QObject::connect(ui.BronzeButton, SIGNAL(toggled(bool)), ui.BronzeButton, SLOT(sl_SwitchIcon(bool)));
	QObject::connect(ui.SFCButton, SIGNAL(toggled(bool)), ui.SFCButton, SLOT(sl_SwitchIcon(bool)));
	QObject::connect(ui.PlatinumButton, SIGNAL(toggled(bool)), ui.PlatinumButton, SLOT(sl_SwitchIcon(bool)));
	QObject::connect(ui.DiamondButton, SIGNAL(toggled(bool)), ui.DiamondButton, SLOT(sl_SwitchIcon(bool)));
#pragma endregion

#pragma region アイコンの読み込み
	//	アイコンサイズ
	QSize iconSize(180 , 65);
	QString iconDir = "icon";
	QPixmap pixmap_default, pixmap_toggled;
	
	//	ブロンズ
	pixmap_default.load(iconDir + "/bronze.png");
	pixmap_toggled.load(iconDir + "/bronze_checked.png");
	ui.BronzeButton->SetIcons(QIcon(pixmap_default), QIcon(pixmap_toggled),iconSize);
	//	SFC
	pixmap_default.load(iconDir + "/sfc.png");
	pixmap_toggled.load(iconDir + "/sfc_checked.png");
	ui.SFCButton->SetIcons(QIcon(pixmap_default), QIcon(pixmap_toggled), iconSize);
	//	プラチナ
	pixmap_default.load(iconDir + "/platinum.png");
	pixmap_toggled.load(iconDir + "/platinum_checked.png");
	ui.PlatinumButton->SetIcons(QIcon(pixmap_default), QIcon(pixmap_toggled), iconSize);
	//	ダイアモンド
	pixmap_default.load(iconDir + "/diamond.png");
	pixmap_toggled.load(iconDir + "/diamond_checked.png");
	ui.DiamondButton->SetIcons(QIcon(pixmap_default), QIcon(pixmap_toggled), iconSize);
#pragma endregion

}