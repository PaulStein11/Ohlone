#ifndef DATETIME_H
#define DATETIME_H

#include "date.h"
#include "time.h"
#include <iostream> 
#include <ctime>

using namespace std;

class DateTime : public Date, public Time
{
public:
	DateTime();
	//DateTime(int day = 0, int month = 0, int year = 0, int hour = 0, int minute = 0, int second = 0);
	Time getTime();
	Date getDate();
	void display(); // display date & time only
private:
	//time_t currentTime = time(0);
	//tm* utcTime = gmtime(&currentTime);
};
#endif // !DATETIME_H
