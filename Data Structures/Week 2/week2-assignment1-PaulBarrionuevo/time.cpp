#include "time.h"
#include <iostream>
#include <iomanip>

using namespace std;

/*******************************************************
 * Function Name: Time Constructor
 * Purpose: Builds an empty constructor of the class Time
 *******************************************************/
Time::Time()
{
	this->hour = 18;
	this->minute = 15;
	this->second = 10;
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
