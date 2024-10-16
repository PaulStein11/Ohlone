/*
    Description: Temperature Control is defined with the class Thermostat
    Two arguments are define: description of the sensor, a default status of not connected
    The methods are to set and get the status and to see the mode that its set by default 
*/  

#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include <string>
using namespace std;

class Thermostat
{
private:
    bool isConnected = false;
    string description = "";

public:
    // Similar to energy.h potential inherit
    Thermostat(string description);
    ~Thermostat();
    void setStatus();
    string getStatus();
    string dayMode();
    string nightMode();

};
#endif // !THERMOSTAT_H
