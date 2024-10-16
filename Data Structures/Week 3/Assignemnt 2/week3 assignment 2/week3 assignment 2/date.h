#ifndef DATE_H
#define DATE_H

#include <iostream>

using namespace std;

class Date
{
public:
	Date();
	~Date(); // Class destructure
	void display(); // display date only
	int getDay() const;
	void setDay(int day);
	int getMonth() const;
	void setMonth(int month);
	int getYear() const;
	void setYear(int year);

	/* Definitions of Operator Overloading */
	bool operator==(const Date) const;		// Equal Logic comparison
	bool operator!=(const Date) const;		// Not Equal Comparison
	bool operator<(const Date) const;		// Less than 
	bool operator>(const Date) const;		// Greater than 
	bool operator>=(const Date) const;		// Greater equal to
	bool operator<=(const Date) const;		// Less equal to

	friend istream& operator>>(istream& in, Date& a); //cin
	friend ostream& operator<<(ostream& out, Date& a); //cout

private:
	// Private attributes
	int day;
	int month;
	int year;
};
#endif // !DATE_H