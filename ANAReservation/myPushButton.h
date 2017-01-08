#pragma once

#include <QPushButton>

/**
*	@class	myPushButton
*	@brief	�A�C�R���؂�ւ����s���{�^��
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

	//	�A�C�R������o�^����
	void SetIcons(QIcon icon_default, QIcon icon_Toggled, QSize icon_size);

public slots:
	
//	�A�C�R����؂�ւ���
void sl_SwitchIcon(bool isSelected);

};
