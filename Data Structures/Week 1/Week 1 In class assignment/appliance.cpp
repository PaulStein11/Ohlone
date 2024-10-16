#include "appliance.h"

Appliance::Appliance(string description)
{
    this->description = description;
}
Appliance::~Appliance()
{

}
void Appliance::setStatus()
{
    if (isConnected == false)
    {
        isConnected = true;
    }
    else if (isConnected == true)
    {
        isConnected = false;
    }
}
string Appliance::getStatus()
{
    return "Smart Energy House is connected: " + isConnected;
}
void Appliance::addAppliance()
{
    ++numberAppliances;
}
int Appliance::getAppliancesConnected()
{
    return numberAppliances;
}