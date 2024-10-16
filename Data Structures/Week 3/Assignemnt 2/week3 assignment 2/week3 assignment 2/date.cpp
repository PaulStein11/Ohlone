#include "date.h"

/*******************************************************
 * Function Name: Date Constructor
 * Purpose: Builds constructor of the class Date
 * and default parameters
 *******************************************************/
Date::Date()
{
	this->day = 11;
	this->month = 9;
	this->year = 2024;
}
/*******************************************************
 * Function Name: Date Destructor
 * Purpose: Destroys the constructor of class Date
 *******************************************************/
Date::~Date()
{
}
/*******************************************************
 * Function Name: display()
 * Purpose: Displays the date month, day and yer from the class methods
 * Return: Console out of the methods getMonth, getDay and getYear
 *******************************************************/
void Date::display()
{
	cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;

}
/*******************************************************
 * Function Name: getDay()
 * Purpose: Gets date's day
 * Return: Class private attribute
 *******************************************************/
int Date::getDay() const
{
	return this->day;
}
/*******************************************************
 * Function Name: setDay()
 * Purpose: Sets date's day
 * Parameter: day_ day in date
 *******************************************************/
void Date::setDay(int day_)
{

	this->day = day_;
}
/*******************************************************
 * Function Name: getMonth()
 * Purpose: Gets date's month
 * Return: Class private attribute
 *******************************************************/
int Date::getMonth() const
{
	return this->month;
}
/*******************************************************
 * Function Name: setMonth()
 * Purpose: Sets date's month
 * Parameter: month_ month in date
 *******************************************************/
void Date::setMonth(int month_)
{
	this->month = month_;
}
/*******************************************************
 * Function Name: getYear()
 * Purpose: Gets date's year
 * Return: Class private attribute
 *******************************************************/
int Date::getYear() const
{
	return this->year;
}
/*******************************************************
 * Function Name: setYear()
 * Purpose: Sets date's year
 * Parameter: year_ year in date
 *******************************************************/
void Date::setYear(int year_)
{
	this->year = year_;
}
/*******************************************************
 * Function Name: operator==
 * Purpose: Compares two equal classes
 * Parameter: a a point in date
 * Return: pending implementation
 *******************************************************/
bool Date::operator==(const Date a) const
{
	return true;
}
/*******************************************************
 * Function Name: operator!=
 * Purpose: Compares two not equal classes
 * Parameter: a a point in date
 * Return: pending implementation
 *******************************************************/
bool Date::operator!=(const Date a) const
{
	return true;
}
/*******************************************************
 * Function Name: operator>
 * Purpose: Compares two points in date.
 * Parameter: a a point in date
 * Return: pending implementation
 *******************************************************/
bool Date::operator>(const Date a) const
{
	return this;
}
/*******************************************************
 * Function Name: operator<
 * Purpose: Compares two points in date.
 * Parameter: a a point in date
 * Return: pending implementation
 *******************************************************/
bool Date::operator<(const Date a) const
{
	return true;
}
/*******************************************************
 * Function Name:operator<<
 * Purpose: Prints a Date object.
 * Parameter:an output stream
 * Parameter: a a point in time
 * Return: out
 *******************************************************/
ostream& operator<<(ostream& out, Date a)
{
	return out;
}
/*******************************************************
 * Function Name: operator>>
 * Purpose: Reads a Date object.
 * Parameter: in an input stream
 * Parameter: a a variable holding a point in time
 * Return: in
 *******************************************************/
istream& operator>>(istream& in, Date& a)
{
	return in;
}