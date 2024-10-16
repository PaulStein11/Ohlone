#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date
{
public:
	Date();
	Date(int _day, int _month, int _year);

	// Getters
	int getDay() const;
	int getMonth() const;
	int getYear() const;

	// Setters
	void setDay(int _day);
	void setMonth(int _month);
	void setYear(int _year);
	string toString() const;
	friend std::ostream& operator<<(std::ostream& os, const Date& date);


private:
	int day;
	int month;
	int year;
};
#endif // !DATE_H