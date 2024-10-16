#ifndef DATETIME_H
#define DATETIME_H

#include "date.h"
#include "time.h"
#include <iostream>
#include <string>
#include <ctime>  // for time-related functions


using namespace std;

class DateTime : public Date, public Time
{
public:
	DateTime() : Date(), Time() {}
	DateTime(int _day, int _month, int _year, int _hour, int _minute, int _second) :
		Date(_day, _month, _year),
		Time(_hour, _minute, _second) {}
	DateTime(const DateTime& dt);
	string toString() const;
	static DateTime now();
	friend ostream& operator<<(ostream& out, DateTime& a); //cout
};
#endif // !DATETIME_H
