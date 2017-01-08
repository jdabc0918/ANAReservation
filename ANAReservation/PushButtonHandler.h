#pragma once

#include "myPushButton.h"

/**
*	@class	PushButtonHandler
*	@brief	myPushButton�����W�I�{�^���I�ɊǗ�����N���X
**/
class PushButtonHandler
{
private:
	
	std::vector<myPushButton *> m_buttons;
	int m_nButton;			//	�o�^�{�^����
	int	m_currentButton;	//	���݃I���̃{�^���C���f�b�N�X

public:
	PushButtonHandler();
	~PushButtonHandler();

	//	������
	void InitButtons(std::vector<myPushButton *> buttonPtrArray, int current_index = 0);

	//	�{�^�����N���b�N���ꂽ�Ƃ��ɌĂ΂��֐�
	void UpdateSelection();

	//	���ݑI������Ă���{�^���C���f�b�N�X��Ԃ�
	int	GetCurrentIndex();

private:
	//	�{�^���̏�Ԃ��X�V����
	void SetButtonSelection(int selected_index);

};

