#include "ANADate.h"



ANADate::ANADate()
{
}


ANADate::~ANADate()
{
}


QDate ANADate::GetReservationDateOf(QDate boarding_date, RESERVATION_TYPE type)
{
	int year = boarding_date.year();
	int month = boarding_date.month();
	int day = boarding_date.day();
	bool uruu_doshi = (boarding_date.daysInYear() == 366) ? true : false;

	//	2か月前を求める
	QDate TwoMonthAgo;
	if (month == 4 && day >= 28)	//	4/28,29,30
	{
		if (day >= 29 && uruu_doshi)
			TwoMonthAgo.getDate(&year, (int*)(2), (int*)(29));
		else
			TwoMonthAgo.getDate(&year, (int*)(2), (int*)(28));
	}
	else if (month == 8 && day >= 30)	//	8/30,31
		TwoMonthAgo.getDate(&year, (int*)(6), (int*)(30));
	else if (month == 1 && day >= 30)	//	1/30,31
		TwoMonthAgo.getDate(&year, (int*)(11), (int*)(30));
	else
	{
		TwoMonthAgo = boarding_date.addMonths(-2);
	}

	//	計算
	QDate ret;
	switch (type)
	{
	case RTYPE_TABIWARI75:
		ret = boarding_date;
		ret = ret.addDays(-75);
		break;
	case RTYPE_NORMAL:
		//	そのまま2か月前を返す
		ret = TwoMonthAgo;
		break;
	case RTYPE_PRIORITY:
		//	更に14日前を返す
		ret = TwoMonthAgo.addDays(-14);
		break;	
	default:
		break;
	}

	return ret;
}