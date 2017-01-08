#pragma once

#include <QDate>

/**
*	@class	ANADate
*	@brief	予約日などを計算するクラス
**/
class ANADate
{
public:
	ANADate();
	~ANADate();

	enum RESERVATION_TYPE
	{
		RTYPE_PRIORITY,	//	2か月+14日前
		RTYPE_NORMAL,		//	2か月前
		RTYPE_TABIWARI75	//	2か月+15日前
	};

	static QDate GetReservationDateOf(QDate boarding_date, RESERVATION_TYPE type = RTYPE_NORMAL);
};

