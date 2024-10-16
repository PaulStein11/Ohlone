#ifndef DATE_H
#define DATE_H

#include <iostream>

using namespace std;

class Date
{
public:
	Date(); // Constructor with no arguments
	~Date(); // Class destructure
	void display(); // display date only
	int getDay() const; 
	void setDay(int day);
	int getMonth() const;
	void setMonth(int month);
	int getYear() const;
	void setYear(int year);

private:
    // Private attributes
	int day;
	int month;
	int year;
};
#endif // !DATE_H