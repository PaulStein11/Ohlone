#ifndef DATETIME_H
#define DATETIME_H

#include "date.h"
#include "time.h"
#include <iostream> 

using namespace std;

class DateTime : public Date, public Time
{
public:
    DateTime(int hour, int minute); // Constructor with no arguments
    ~DateTime(); // Destructor
    Time getTime(); // Get current time
    Date getDate();// Get current date
    void display(); // display date & time only

    bool operator==(const DateTime&) const;
    bool operator!=(const DateTime&) const;
    bool operator>(const DateTime&) const;
    bool operator<(const DateTime&) const;
    bool operator>=(const DateTime&) const;
    bool operator<=(const DateTime&) const;

    friend istream& operator>>(istream& in, DateTime& dt);
    friend ostream& operator<<(ostream& out, DateTime dt);
private:
};
#endif 
