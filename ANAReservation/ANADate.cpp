#include "ANADate.h"



ANADate::ANADate()
{
}


ANADate::~ANADate()
{
}


QDate ANADate::GetReservationDateOf(QDate boarding_date, RESERVATION_TYPE type)
{
	QDate ret = boarding_date;

	switch (type)
	{
	case RTYPE_TABIWARI75:
		ret = ret.addDays(-75);
		break;

		//	2か月前を求める
		if (ret.month() == 4 && ret.day() >= 28)	//	4/28,29,30
		{
			if (ret.day() >= 29 && ret.daysInYear() == 366)
				ret.getDate((int*)ret.year(), (int*)(2), (int*)(29));
			else
				ret.getDate((int*)ret.year(), (int*)(2), (int*)(28));
		}
		else if (ret.month() == 8 && ret.day() >= 30)	//	8/30,31
			ret.getDate((int*)ret.year(), (int*)(6), (int*)(30));
		else if (ret.month() == 1 && ret.day() >= 30)	//	1/30,31
			ret.getDate((int*)ret.year(), (int*)(11), (int*)(30));
		else
			ret.addMonths(-2);
	case RTYPE_NORMAL:
		//	そのまま2か月前を返す
		break;
	case RTYPE_PRIORITY:
		//	更に14日前を返す
		ret.addDays(-14);
		break;
	
	default:
		break;
	}

	return ret;
}
