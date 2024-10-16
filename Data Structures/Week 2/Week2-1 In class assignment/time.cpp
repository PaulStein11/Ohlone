#include "time.h"
#include <iostream>

using namespace std;


Time::Time()
{
	this->hour = 18;
	this->minute = 30;
	this->second = 00;
}
Time::~Time()
{

}
void Time::display()
{
	cout << getHour() << ":" << getMinute() << ":" << getSecond();
}

/*
* void Time::getTime()
{
	cout << "" << endl;
}
*/

int Time::getHour()
{
	return this->hour;
}
void Time::setHour(int _hour)
{
	this->hour = _hour;

}
int Time::getMinute()
{
	return this->minute;
}
void Time::setMinute(int _minute)
{
	this->minute = _minute;
}
int Time::getSecond()
{
	return this->second;
}
void Time::setSecond(int _second)
{
	this->second = _second;
}