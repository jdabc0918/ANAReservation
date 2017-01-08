#pragma once

#include <QPushButton>

/**
*	@class	myPushButton
*	@brief	アイコン切り替えを行うボタン
**/
class myPushButton : public QPushButton
{
	Q_OBJECT

private:
	
	QIcon m_iconDefault;
	QIcon m_iconToggled;

public:
	myPushButton(QWidget *parent);
	~myPushButton();

	//	アイコン情報を登録する
	void SetIcons(QIcon icon_default, QIcon icon_Toggled, QSize icon_size);

public slots:
	
//	アイコンを切り替える
void sl_SwitchIcon(bool isSelected);

};
