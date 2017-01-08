#include "PushButtonHandler.h"

PushButtonHandler::PushButtonHandler()
{
	m_nButton = 0;
	m_currentButton = -1;
}

PushButtonHandler::~PushButtonHandler()
{
}

void PushButtonHandler::InitButtons(std::vector<myPushButton *> buttonPtrArray, int current_index)
{
	//	�{�^���̃|�C���^�̔z����󂯎��
	m_buttons = buttonPtrArray;
	m_nButton = (int)m_buttons.size();

	//	�I���ɂ���{�^���C���f�b�N�X��o�^����
	m_currentButton = current_index;
	
	//	�I����Ԃ��Z�b�g����
	SetButtonSelection(m_currentButton);
}

void PushButtonHandler::UpdateSelection()
{
	//	�ǂ̃{�^���������ꂽ�����肷��
	for(int i=0;i<m_nButton;i++)
	{
		if (m_buttons[i]->isChecked() && i != m_currentButton)
		{
			m_currentButton = i;
			break;
		}
	}

	//	�{�^�����A�b�v�f�[�g����
	SetButtonSelection(m_currentButton);
}

void PushButtonHandler::SetButtonSelection(int selected_index)
{
	//	selected_index�̃{�^�����I���ɂ��A����ȊO�̃{�^�����I�t�ɂ���
	for (int i = 0; i < m_nButton; i++)
	{
		if (i == selected_index)
		{
			m_buttons[i]->setChecked(true);
			m_buttons[i]->sl_SwitchIcon(true);
		}
		else
		{
			m_buttons[i]->setChecked(false);
			m_buttons[i]->sl_SwitchIcon(false);
		}
	}
}

//	���ݑI������Ă���{�^���C���f�b�N�X��Ԃ�
int PushButtonHandler::GetCurrentIndex()
{
	return m_currentButton;
}