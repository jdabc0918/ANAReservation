#include "myPushButton.h"

myPushButton::myPushButton(QWidget *parent)
	: QPushButton(parent)
{
}

myPushButton::~myPushButton()
{
}

//	アイコン情報を登録する
void myPushButton::SetIcons(QIcon icon_default, QIcon icon_Toggled, QSize icon_size)
{
	m_iconDefault = icon_default;
	m_iconToggled = icon_Toggled;
	this->setIconSize(icon_size);
}

//	アイコンを切り替える
void myPushButton::sl_SwitchIcon(bool isSelected)
{
	if (!isSelected) this->setIcon(m_iconDefault);
	else this->setIcon(m_iconToggled);
}