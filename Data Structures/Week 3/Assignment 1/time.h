#ifndef TIME_H
#define TIME_H

#include <iostream>

using namespace std;

class Time
{
public:

	Time(); // Constructor with no arguments
	Time(int hour, int minute, int second); // Constructor with three arguments
	~Time(); // Destructor
	void display(); // display time only
	int getHour(); // Get current hour
	void setHour(int hour_);
	int getMinute(); // Get current minute
	void setMinute(int minute_);
	int getSecond(); // Get current second
	void setSecond(int second_);

	/* Definitions of Operator Overloading */ 
	Time operator+(const int minute) const; // Addition
	int operator-(const Time) const;		// Subtraction
	bool operator==(const Time) const;		// Equal Logic comparison
	bool operator!=(const Time) const;		// Not Equal Comprison
	bool operator<(const Time) const;		// Less than 
	friend istream& operator>>(istream& in, Time& a); //cin
	friend ostream& operator<<(ostream& out, Time a); //cout


private:
	// Private attributes
	int hour;
	int minute;
	int second;
};
#endif // !TIME_H