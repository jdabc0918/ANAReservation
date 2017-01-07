#include "myPushButton.h"

myPushButton::myPushButton(QWidget *parent)
	: QPushButton(parent)
{
}

myPushButton::~myPushButton()
{
}

//	�A�C�R�����Z�b�g����
void myPushButton::SetIcons(QIcon icon_default, QIcon icon_Toggled, QSize icon_size)
{
	m_iconDefault = icon_default;
	m_iconToggled = icon_Toggled;
	this->setIconSize(icon_size);
	this->setIcon(m_iconDefault);
}

//	�A�C�R����؂�ւ���
void myPushButton::sl_SwitchIcon(bool toggled_flag)
{
	if (toggled_flag) this->setIcon(m_iconDefault);
	else this->setIcon(m_iconToggled);
}