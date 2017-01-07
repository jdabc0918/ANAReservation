#pragma once

#include <QPushButton>

class myPushButton : public QPushButton
{
	Q_OBJECT

private:
	
	QIcon m_iconDefault;
	QIcon m_iconToggled;

public:
	myPushButton(QWidget *parent);
	~myPushButton();

	//	アイコンをセットする
	void SetIcons(QIcon icon_default, QIcon icon_Toggled, QSize icon_size);

public slots:
	
//	アイコンを切り替える
void sl_SwitchIcon(bool toggled_flag);

};
