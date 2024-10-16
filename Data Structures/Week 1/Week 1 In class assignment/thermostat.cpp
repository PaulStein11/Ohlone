#include "thermostat.h"

Thermostat::Thermostat(string description)
{
    this->description = description;
}

Thermostat::~Thermostat()
{
    // nothing to clean 
}

void Thermostat::setStatus()
{
    if (isConnected == false)
    {
        isConnected == true;
    }
    else if (isConnected == true)
    {
        isConnected == false;
    }
}
string Thermostat::getStatus()
{
    return "Smart Thermostat House is connected: " + isConnected;
}
string Thermostat::dayMode()
{
    return "Smart Thermostat set up to Day Mode";
}
string Thermostat::nightMode()
{
    return "Smart Thermostat set up to Night Mode";
}