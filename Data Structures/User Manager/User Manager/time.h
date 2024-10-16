#ifndef TIME_H
#define TIME_H

#include <iostream>
using namespace std;

class Time
{
public:
	Time();
	Time(int _second, int _minute, int _hour);

	// Getters
	int getSecond() const;
	int getMinute() const;
	int getHour() const;

	// Setters
	void setSecond(int _second);
	void setMinute(int _minute);
	void setHour(int _hour);

	string toString() const;

	friend std::ostream& operator<<(std::ostream& os, const Time& time);


private:
	int second;
	int minute;
	int hour;
};
#endif // !TIME_H
