#include "energy.h"

EnergySystem::EnergySystem(string description)
{
    this->description = description;
}

EnergySystem::~EnergySystem()
{
    // nothing to clean 
}

void EnergySystem::setStatus()
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
string EnergySystem::getStatus()
{
    return "Smart Energy House is connected: " + isConnected;
}
string EnergySystem::dayMode()
{
    return "Smart Energy set up to Day Mode";
}
string EnergySystem::nightMode()
{
    return "Smart Energy set up to Night Mode";
}