#include "dateTime.h"
#include <ctime>
#include <chrono>
#include <sstream>  // Corrected from <osstringstream> to <sstream>
#include <iomanip>  // For std::put_time
#include <iostream> // For std::cout

using namespace std;

DateTime::DateTime(const DateTime& dt)
{
	this->setMonth(dt.getMonth());
	this->setDay(dt.getDay());
	this->setYear(dt.getYear());
	this->setHour(dt.getHour());
	this->setMinute(dt.getMinute());
	this->setSecond(dt.getSecond());
}
string DateTime::toString() const
{
    return Date::toString() + " - " + Time::toString();
}

DateTime DateTime::now() {
    std::time_t currentTime = std::time(nullptr);
    std::tm* localTime = std::localtime(&currentTime);

    return DateTime(localTime->tm_year + 1900, localTime->tm_mon + 1, localTime->tm_mday,
        localTime->tm_hour, localTime->tm_min, localTime->tm_sec);
}

// Overload << operator for DateTime
std::ostream& operator<<(std::ostream& os, const DateTime& dt) {
    os << static_cast<const Date&>(dt) << " " << static_cast<const Time&>(dt);
    return os;
}
