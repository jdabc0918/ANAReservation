#include "mainwindow.h"

mainWindow::mainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//	設定データ読み込み

	//	スタイル設定
	this->setWindowFlags(Qt::FramelessWindowHint);

	//	初期値設定
	int init_selected_index = 0;
	QDate init_date = QDate::currentDate();

	//	プッシュボタンの初期化
	InitPushButtons(init_selected_index);
	sl_ButtonClicked();

	//	カレンダーの初期化
	InitCalenderWidget(init_date);
}

mainWindow::~mainWindow()
{

}

void mainWindow::InitPushButtons(int init_selected_index)
{

#pragma region コネクト
	QObject::connect(ui.BronzeButton, SIGNAL(clicked()), this, SLOT(sl_ButtonClicked()));
	QObject::connect(ui.SFCButton, SIGNAL(clicked()), this, SLOT(sl_ButtonClicked()));
	QObject::connect(ui.PlatinumButton, SIGNAL(clicked()), this, SLOT(sl_ButtonClicked()));
	QObject::connect(ui.DiamondButton, SIGNAL(clicked()), this, SLOT(sl_ButtonClicked()));
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

	//	ハンドラにボタンを登録する
	m_bHandler.InitButtons(std::vector<myPushButton *>{ ui.BronzeButton, ui.SFCButton, ui.PlatinumButton, ui.DiamondButton},
		init_selected_index);
}

void mainWindow::InitCalenderWidget(QDate init_date)
{
#pragma region コネクト
	QObject::connect(ui.calendarWidget, SIGNAL(selectionChanged()), this, SLOT(sl_UpdateReservationDate()));
#pragma endregion

	//	カレンダーの選択をセット
	//	hogehoge
	ui.calendarWidget->selectedDate() = init_date;

	//	グリッド表示
	ui.calendarWidget->setGridVisible(true);

	//	縦軸を非表示に設定
	ui.calendarWidget->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);

	//	ラベルを更新
	UpdateReservationDateLabels(init_date);
}

void mainWindow::UpdateReservationDateLabels(QDate selected_date)
{
	QDate tabiwariDate = ANADate::GetReservationDateOf(selected_date, ANADate::RTYPE_TABIWARI75);	
	QDate priorityDate = ANADate::GetReservationDateOf(selected_date, ANADate::RTYPE_PRIORITY);	
	QDate normalDate = ANADate::GetReservationDateOf(selected_date, ANADate::RTYPE_NORMAL);
	//ui.Tabiwari75DateLabel->setText(tabiwariDate.toString("yyyy/MM/dd"));
	//ui.PriorityDateLabel->setText(priorityDate.toString("yyyy/MM/dd"));
	//ui.NormalDateLabel->setText(normalDate.toString("yyyy/MM/dd"));
}

void mainWindow::sl_ButtonClicked()
{
	m_bHandler.UpdateSelection();
	qDebug() << __FUNCTION__ << ": current Index = " << m_bHandler.GetCurrentIndex();

	int current_button = m_bHandler.GetCurrentIndex();
	switch (current_button)
	{
	case 0:
		this->setStyleSheet(
			"QMainWindow{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(106, 70, 14, 255));}"
		);
		break;
	case 1:
		this->setStyleSheet(
			"QMainWindow{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(0, 31, 91, 255));}"
		);
		break;
	case 2:
		this->setStyleSheet(
			"QMainWindow{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(7, 49, 144, 255));}"
		);
		break;
	case 3:
		this->setStyleSheet(
			"QMainWindow{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(137, 24, 52, 255));}"
		);
		break;
	default:
		break;
	}
}

void mainWindow::sl_UpdateReservationDate()
{
	//	カレンダーの日付を取得する
	QDate selectedDate = ui.calendarWidget->selectedDate();
	qDebug() << __FUNCTION__ << ":" << selectedDate;

	//	日付に応じてラベルを更新する
	UpdateReservationDateLabels(selectedDate);
}