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