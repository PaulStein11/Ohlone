#include "date.h"

Date::Date()
{
	this->day = 5;
	this->month = 9;
	this->year = 2024;
	utcTime->tm_hour -= 7;
	mktime(utcTime);
}
Date::~Date()
{

}

void Date::display()
{
	//cout << getMonth() << ":" << getDay() << ":" << getYear();
	cout << "Year: " << 1900 + utcTime->tm_year << endl;
	cout << "Month: " << 1 + utcTime->tm_mon << endl;
	cout << "Day: " << utcTime->tm_mday << endl;

}
int Date::getDay() const
{
	return this->day;
}
void Date::setDay(int _day)
{

	// this->day = _day;
}
int Date::getMonth() const
{
	return this->month;
}
void Date::setMonth(int _month)
{
	this->month = _month;
}
int Date::getYear() const
{
	return this->year;
}
void Date::setYear(int _year)
{
	this->year = _year;
}