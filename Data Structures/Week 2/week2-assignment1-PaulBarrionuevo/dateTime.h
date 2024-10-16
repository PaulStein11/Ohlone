#ifndef DATETIME_H
#define DATETIME_H

#include "date.h"
#include "time.h"
#include <iostream> 

using namespace std;

class DateTime : public Date, public Time
{
public:
	DateTime(); // Constructor with no arguments
	~DateTime(); // Destructor
	Time getTime(); // Get current time
	Date getDate();// Get current date
	void display(); // display date & time only
private:
};
#endif // !DATETIME_H