#pragma once

#include <QDate>

/**
*	@class	ANADate
*	@brief	�\����Ȃǂ��v�Z����N���X
**/
class ANADate
{
public:
	ANADate();
	~ANADate();

	enum RESERVATION_TYPE
	{
		RTYPE_PRIORITY,	//	2����+14���O
		RTYPE_NORMAL,		//	2�����O
		RTYPE_TABIWARI75	//	2����+15���O
	};

	static QDate GetReservationDateOf(QDate boarding_date, RESERVATION_TYPE type = RTYPE_NORMAL);
};

