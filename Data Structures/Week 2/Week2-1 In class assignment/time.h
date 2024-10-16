#ifndef TIME_H
#define TIME_H

#include <iostream>

using namespace std;

class Time
{
public:
	Time();
	//Time(int hour, int minute, int second);
	~Time();
	void display(); // display time only
	//void getTime(); // gets current time
	int getHour(); // Get current hour
	void setHour(int hour);
	int getMinute(); // Get current minute
	void setMinute(int minute);
	int getSecond(); //get current second
	void setSecond(int second);

private:
	int hour;
	int minute;
	int second;
};
#endif // !TIME_H
