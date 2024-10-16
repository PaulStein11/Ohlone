#ifndef TIME_H
#define TIME_H

#include <iostream>

using namespace std;

class Time
{
public:

	Time(); // Constructor with no arguments
	//Time(int hour, int minute, int second); // Constructor with three arguments
	~Time(); // Destructor
	void display(); // display time only
	int getHour(); // Get current hour
	void setHour(int hour_);
	int getMinute(); // Get current minute
	void setMinute(int minute_);
	int getSecond(); // Get current second
	void setSecond(int second_);

private:
	// Private attributes
	int hour;
	int minute;
	int second;
};
#endif // !TIME_H