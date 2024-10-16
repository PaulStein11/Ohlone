#include "date.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

Date::Date() {}
Date::Date(int _day, int _month, int _year)
{
	day = _day;
	month = _month;
	year = _year;
}
// Getters
int Date::getDay() const
{
	return day;
}
int Date::getMonth() const
{
	return month;
}
int Date::getYear() const
{
	return year;
}
// Setters
void Date::setDay(int _day)
{
	day = _day;
}
void Date::setMonth(int _month)
{
	month = _month;
}
void Date::setYear(int _year)
{
	year = _year;
}
string Date::toString() const
{
	string sDate = to_string(day) + ":" + to_string(month) + ":" + to_string(year);
	return sDate;
}

// Overload << operator for Date
std::ostream& operator<<(std::ostream& os, const Date& date) {
	os << std::setw(4) << std::setfill('0') << date.year << "-"
		<< std::setw(2) << std::setfill('0') << date.month << "-"
		<< std::setw(2) << std::setfill('0') << date.day;
	return os;
}