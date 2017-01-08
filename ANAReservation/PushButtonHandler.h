#pragma once

#include "myPushButton.h"

/**
*	@class	PushButtonHandler
*	@brief	myPushButtonをラジオボタン的に管理するクラス
**/
class PushButtonHandler
{
private:
	
	std::vector<myPushButton *> m_buttons;
	int m_nButton;			//	登録ボタン数
	int	m_currentButton;	//	現在オンのボタンインデックス

public:
	PushButtonHandler();
	~PushButtonHandler();

	//	初期化
	void InitButtons(std::vector<myPushButton *> buttonPtrArray, int current_index = 0);

	//	ボタンがクリックされたときに呼ばれる関数
	void UpdateSelection();

	//	現在選択されているボタンインデックスを返す
	int	GetCurrentIndex();

private:
	//	ボタンの状態を更新する
	void SetButtonSelection(int selected_index);

};

