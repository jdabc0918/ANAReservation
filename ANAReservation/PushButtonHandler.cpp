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
	//	ボタンのポインタの配列を受け取る
	m_buttons = buttonPtrArray;
	m_nButton = (int)m_buttons.size();

	//	オンにするボタンインデックスを登録する
	m_currentButton = current_index;
	
	//	選択状態をセットする
	SetButtonSelection(m_currentButton);
}

void PushButtonHandler::UpdateSelection()
{
	//	どのボタンが押されたか特定する
	for(int i=0;i<m_nButton;i++)
	{
		if (m_buttons[i]->isChecked() && i != m_currentButton)
		{
			m_currentButton = i;
			break;
		}
	}

	//	ボタンをアップデートする
	SetButtonSelection(m_currentButton);
}

void PushButtonHandler::SetButtonSelection(int selected_index)
{
	//	selected_indexのボタンをオンにし、それ以外のボタンをオフにする
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

//	現在選択されているボタンインデックスを返す
int PushButtonHandler::GetCurrentIndex()
{
	return m_currentButton;
}