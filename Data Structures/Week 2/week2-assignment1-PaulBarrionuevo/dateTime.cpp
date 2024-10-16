#include "date.h"
#include "time.h"
#include "dateTime.h"

/*******************************************************
 * Function Name: DateTime Constructor
 * Purpose: Builds an empty constructor of the class DateTime
 *******************************************************/
DateTime::DateTime()
{
}
/*******************************************************
 * Function Name: DateTime Destructor
 * Purpose: Destroys the constructor of class DateTime
 *******************************************************/
 DateTime::~DateTime()
 {
 }
 /*******************************************************
 * Function Name: getDate()
 * Purpose: Gets date's year, month and day
 * Return: Date object with values set
 *******************************************************/
Date DateTime::getDate()
{
	Date date;
	date.setMonth(getMonth());
	date.setDay(getDay());
	date.setYear(getYear());
	return date;
}
 /*******************************************************
 * Function Name: getTime()
 * Purpose: Gets time's hour, minute and second
 * Return: Date object with values set
 *******************************************************/
Time DateTime::getTime()
{
	Time time;
	time.setHour(getHour());
	time.setMinute(getMinute());
	time.setSecond(getSecond());
	return time;
}
 /*******************************************************
 * Function Name: display()
 * Purpose: Override base fuction and displays date and time
 * Return: date and time from the base classs
 *******************************************************/
void DateTime::display()
{
	Date::display();
	Time::display();
}