#include "time.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

Time::Time()
{

}
Time::Time(int _second, int _minute, int _hour)
{
	second = _second;
	minute = _minute;
	hour = _hour;
}
// Getters
int Time::getSecond() const
{
	return second;
}
int Time::getMinute() const
{
	return minute;
}
int Time::getHour() const
{
	return hour;
}

// Setters
void Time::setSecond(int _second)
{
	second = _second;
}
void Time::setMinute(int _minute)
{
	minute = _minute;
}
void Time::setHour(int _hour)
{
	hour = _hour;
}
string Time::toString() const
{
	string stime = to_string(hour) + ":" + to_string(minute) + ":" + to_string(second);
	return stime;
}

// Overload << operator for Time
ostream& operator<<(ostream& os, const Time& time) {
	os << std::setw(2) << std::setfill('0') << time.hour << ":"
		<< std::setw(2) << std::setfill('0') << time.minute << ":"
		<< std::setw(2) << std::setfill('0') << time.second;
	return os;
}
