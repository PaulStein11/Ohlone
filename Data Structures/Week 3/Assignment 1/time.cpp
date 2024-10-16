#include "time.h"
#include <iostream>
#include <iomanip>

using namespace std;

/*******************************************************
 * Function Name: Time Constructor
 * Purpose: Builds an empty constructor of the class
 *******************************************************/
Time::Time()
{
}
/*******************************************************
 * Function Name: Time Constructor
 * Purpose: Builds a constructor of the class Time
 * Parameter: hour_ hours in time
 * Parameter: minute_ minutes in time
 * Parameter: second_ seconds in time
 *******************************************************/
Time::Time(int hour_, int minute_, int second_)
{
	hour = hour_;
	minute = minute_;
	second = second_;
}
/*******************************************************
 * Function Name: Time Destructor
 * Purpose: Destroys the constructor of class Time
 *******************************************************/
Time::~Time()
{
}
/*******************************************************
 * Function Name: display()
 * Purpose: Displays the time hours minutes and seconds from the class methods
 * Return: Console out of the methods getHour, get Minute and getSecond
 *******************************************************/
void Time::display()
{
	cout << getHour() << ":" << getMinute() << ":" << getSecond() << endl;
}
/*******************************************************
 * Function Name: getHour()
 * Purpose: Gets time's hour
 * Return: Class private attribute
 *******************************************************/
int Time::getHour()
{
	return this->hour;
}
/*******************************************************
 * Function Name: setHour()
 * Purpose: Sets time's hour
 * Parameter: hour_ hours in time
 *******************************************************/
void Time::setHour(int hour_)
{
	this->hour = hour_;
}
/*******************************************************
 * Function Name: getMinute()
 * Purpose: Gets time's minute
 * Return: Class private attribute
 *******************************************************/
int Time::getMinute()
{
	return this->minute;
}
/*******************************************************
 * Function Name: setMinute()
 * Purpose: Sets time's minute
 * Parameter: minute_ minutes in time
 *******************************************************/
void Time::setMinute(int minute_)
{
	this->minute = minute_;
}
/*******************************************************
 * Function Name: getSecond()
 * Purpose: Gets time's second
 * Return: Class private attribute
 *******************************************************/
int Time::getSecond()
{
	return this->second;
}
/*******************************************************
 * Function Name: setSecond()
 * Purpose: Sets time's second
 * Parameter: second_ seconds in time
 *******************************************************/
void Time::setSecond(int second_)
{
	this->second = second_;
}
/*******************************************************
 * Function Name: operator+
 * Purpose: Computes the number of minutes between two points in time.
 * Parameter: min minutes in time
 * Return: the number of total minutes from hours and minutes
 *******************************************************/
Time Time::operator+(int min) const
{
	int result_minutes = hour * 60 + minute + min;
	return Time((result_minutes / 60) % 24, result_minutes % 60, second);
}
/*******************************************************
 * Function Name: operator-
 * Purpose: Computes the number of minutes between two points in time.
 * Parameter: a a point in time
 * Return: the number of minutes that current private attribute is away from Time a instance
 *******************************************************/
int Time::operator-(Time a) const // a becomes my own variables meaining hours, minutes or secs  
{
	return hour * 60 + minute
		- a.getHour() * 60 - a.getMinute();
}
/*******************************************************
 * Function Name: operator==
 * Purpose: Compares two points in time.
 * Parameter: a a point in time
 * Return: true if they are the same
 *******************************************************/
bool Time::operator==(Time a) const
{
	return *this - a == 0;
}
/*******************************************************
 * Function Name: operator!=
 * Purpose: Compares two points in time.
 * Parameter: a point in time
 * Return: true if they are not the same
 *******************************************************/
bool Time::operator!=(Time a) const
{
	return *this - a != 0;
}
/*******************************************************
 * Function Name: operator<
 * Purpose: Compares two points in time.
 * Parameter: a a point in time
 * Return: true if a comes before b
 *******************************************************/
bool Time::operator<(Time a) const
{
	return *this - a < 0;
}
/*******************************************************
 * Function Name:operator<<
 * Purpose: Prints a Time object.
 * Parameter:an output stream
 * Parameter: a a point in time
 * Return: out
 *******************************************************/
ostream& operator<<(ostream& out, Time a)
{
	out << a.getHour() << ":"
		<< setw(2) << setfill('0')
		<< a.getMinute();
	return out;
}
/*******************************************************
 * Function Name: operator>>
 * Purpose: Reads a Time object.
 * Parameter: in an input stream
 * Parameter: a a variable holding a point in time
 * Return: in
 *******************************************************/
istream& operator>>(istream& in, Time& a)
{
	int hours;
	char separator;
	int minutes;
	int seconds = 0;
	in >> hours;  // input hours
	in.get(separator); // Read : character
	in >> minutes; // input minutes
	//in.get(separator); 
	//in >> seconds; // input seconds
	a = Time(hours, minutes, seconds); //passing instance a to constructor Time
	return in;
}