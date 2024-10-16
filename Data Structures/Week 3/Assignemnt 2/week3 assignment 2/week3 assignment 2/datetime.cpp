#include "date.h"
#include "time.h"
#include "dateTime.h"
#include <iomanip>

/*******************************************************
 * Function Name: DateTime Constructor
 * Purpose: Builds an empty constructor of the class DateTime
 *******************************************************/
DateTime::DateTime(int hour_, int minute)
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
* Return: date and time from the base class
*******************************************************/
void DateTime::display()
{
	Date::display();
	Time::display();
}
/*******************************************************
 * Function Name: operator==
 * Purpose: Compares two equal classes
 * Parameter: a a point in time
 * Return: pending implementation
 *******************************************************/
bool DateTime::operator==(const DateTime& a) const
{
	return this;
}
/*******************************************************
 * Function Name: operator!=
 * Purpose: Compares two not equal classes 
 * Parameter: a a point in date time
 * Return: pending implementation
 *******************************************************/
bool DateTime::operator!=(const DateTime& a) const
{
	return this;
}
/*******************************************************
 * Function Name: operator>
 * Purpose: Compares two points in date time.
 * Parameter: a a point in date time
 * Return: pending implementation
 *******************************************************/
bool DateTime::operator>(const DateTime& a) const
{
	return this;
}
/*******************************************************
 * Function Name: operator<
 * Purpose: Compares two points in time.
 * Parameter: a a point in time
 * Return: pending implementation
 *******************************************************/
bool DateTime::operator<(const DateTime& a) const
{
	return this;
}
/*******************************************************
 * Function Name: operator>=
 * Purpose: Compares two points in date time.
 * Parameter: a a point in date time
 * Return: pending implementation
 *******************************************************/
bool DateTime::operator>=(const DateTime& a) const
{
	return this;
}
/*******************************************************
 * Function Name: operator<=
 * Purpose: Compares two points in date time.
 * Parameter: a a point in date time
 * Return: pending implementation
 *******************************************************/
bool DateTime::operator<=(const DateTime& a) const
{
	return this;
}
/*******************************************************
 * Function Name:operator<<
 * Purpose: Prints a DateTime object.
 * Parameter:an output stream
 * Parameter: a a point in time
 * Return: out
 *******************************************************/
ostream& operator<<(ostream& out, DateTime dt)
{
	out << dt.getHour() << ":"
		<< setw(2) << setfill('0')
		<< dt.getMinute();
	return out;
}
/*******************************************************
 * Function Name: operator>>
 * Purpose: Reads a DateTime object.
 * Parameter: in an input stream
 * Parameter: a a variable holding a point in time
 * Return: in
 *******************************************************/
istream& operator >>(istream& in, DateTime& dt)
{
	int hour = dt.getHour();
	int minute = dt.getMinute();
	char separator;
	in >> hour;  // input hours
	in.get(separator); // Read : character
	in >> minute; // input minutes
	//in.get(separator); 
	//in >> seconds; // input seconds
	dt = DateTime(hour, minute); //passing instance a to constructor Time
	return in;
}