#include "date.h"
#include "time.h"
#include "dateTime.h"
//#include <ctime>

DateTime::DateTime()
{

}
Date DateTime::getDate()
{
	Date date;
	date.setMonth(getMonth());
	date.setDay(getDay());
	date.setYear(getYear());
	//utcTime->tm_hour -= 7;
	//mktime(utcTime);
	return date;

}

Time DateTime::getTime()
{
	Time time;
	time.setHour(getHour());
	time.setMinute(getMinute());
	time.setSecond(getSecond());
	return time;
}
void DateTime::display()
{
	Date::display();
	cout << " ";
	Time::display();
}


