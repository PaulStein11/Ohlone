#define _CRT_SECURE_NO_WARNINGS // supress localtime warning

#include <iomanip>
#include <iostream>
#include <string>
#include <ctime>
#include "date.h"
#include "time.h"
#include "dateTime.h"

using namespace std;

/*********** implementation for Time **********/
Time::Time() {
	hour = 0;
	minute = 0;
	second = 0;
}

Time::Time(int h, int m) {
	this->hour = h;
	this->minute = m;
	this->second = 0;
}

Time::Time(int h, int m, int sec) {
	this->hour = h;
	this->minute = m;
	this->second = sec;
}

void Time::setHour(int hour) {
	this->hour = hour;
}

void Time::setMinute(int minute) {
	this->minute = minute;
}

void Time::setSecond(int second) {
	this->second = second;
}

string Time::toString() const {
	string stime = to_string(hour) + ":";
	stime += to_string(minute) + ":";
	stime += to_string(second);
	return stime;
}

Time Time::operator+(const int min) const {
	int result_minutes = hour * 60 + minute + min;
	return Time((result_minutes / 60) % 24, result_minutes % 60, 0);
}

/**
   Computes the number of minutes between two points in time.
   @param *this point in time
   @param t another point in time
   @return the number of minutes that a is away from b
*/
int Time::operator-(const Time& t) const {
	return this->hour * 60 + this->minute
		- t.hour * 60 - t.minute;
}

/**
   Compares two points in time.
   @param *this point in time
   @param t another point in time
   @return true if they are the same
*/
bool Time::operator==(const Time& t) const
{
	return *this - t == 0;
}

bool Time::operator!=(const Time& t) const {
	return *this - t != 0;
	//return !(*this == t);
}

/**
   Compares two points in time.
   @param a a point in time
   @param b another point in time
   @return true if a comes before b
*/
bool Time::operator<(const Time& b) const {
	return *this - b < 0;
}

/**
   Prints a Time object.
   @param out an output stream
   @param a a point in time
   @return out
*/
ostream& operator<<(ostream& out, Time a)
{
	out << a.getHour() << ":"
		<< setw(2) << setfill('0')
		<< a.getMinute();
	return out;
}

/**
   Reads a Time object.
   @param in an input stream
   @param a a variable holding a point in time
   @return in
*/
istream& operator>>(istream& in, Time& a)
{
	int hours;
	char separator;
	int minutes;
	int second;
	in >> hours;
	in.get(separator); // Read : character
	in >> minutes;
	in.get(separator); // Read : character
	in >> second;
	a = Time(hours, minutes, second);
	return in;
}

/*********** implementation for Date **********/

Date::Date() {
	month = 0;
	day = 0;
	year = 0;
}

Date::Date(int m, int d, int y) {
	month = m;
	day = d;
	year = y;
}

string Date::toString() const {
	string sdate = to_string(month) + "/";
	sdate += to_string(day) + "/";
	sdate += to_string(year);
	return sdate;
}

/*********** implementation for DateTime **********/

DateTime::DateTime() 
	: Time(), Date() {
}

DateTime::DateTime(DateTime& dt) {
	this->setMonth(dt.getMonth());
	this->setDay(dt.getDay());
	this->setYear(dt.getYear());
	this->setHour(dt.getHour());
	this->setMinute(dt.getMinute());
	this->setSecond(dt.getSecond());
}

DateTime::DateTime(int m, int d, int y, int hr, int min, int sec)
	: Date(m, d, y), Time(hr, min, sec) {
}

DateTime& DateTime::now() {
	time_t now = time(nullptr);
	tm* lt = localtime(&now);
	setYear(1900 + lt->tm_year);
	setMonth(lt->tm_mon);
	setDay(lt->tm_mday);
	setHour(lt->tm_hour);
	setMinute(lt->tm_min);
	setSecond(lt->tm_sec);
	return *this;
}

string DateTime::toString() const {
	return Date::toString() + " " + Time::toString();
}

DateTime& DateTime::operator=(const DateTime& dt) {
	if (this != &dt)	{
		this->setMonth(dt.month);
		this->setDay(dt.day);
		this->setYear(dt.year);
		this->setHour(dt.hour);
		this->setMinute(dt.minute);
		this->setSecond(dt.second);
	}
	return *this;
}

ostream& operator<<(ostream& out, const DateTime& dt) {
	char fill = out.fill('0');
	//out << setw(2) << dt.getMonth() << '/'
	//	<< setw(2) << dt.getDay() << '/'
	//	<< setw(2) << dt.getYear()
	//	<< " " << dt.getTime();
	out.fill(fill);
	return out;
}

istream& operator>>(istream& in, DateTime& dt)
{
	// TODO
	return in;
}