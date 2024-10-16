#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <ctime>

using namespace std;

class Date
{
public:
	Date();
	~Date();
	void display(); // display date only
	int getDay() const;
	void setDay(int day);
	int getMonth() const;
	void setMonth(int month);
	int getYear() const;
	void setYear(int year);

private:
	int day;
	int month;
	int year;
	time_t currentTime = time(0);
	tm* utcTime = gmtime(&currentTime);
};
#endif // !DATE_H