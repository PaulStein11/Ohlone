/*
	Description: Keyless Entry is defined with the class Locker
	Two arguments are define: description of the sensor and its initial status
	If the door is closed, the locker is inactive and if its open is active
*/

#ifndef LOCKER_H
#define LOCKER_H

#include <string>

using namespace std;

class Locker
{
public:
	Locker(string description);
	~Locker();
	void setLocker();
	string getStatus();

private:
	string description;
	bool isActive = false; // Default to closed

};

#endif // !LOCKER_H

