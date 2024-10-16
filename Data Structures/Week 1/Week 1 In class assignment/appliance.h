/*
    Description: Remotely Control Appliances is defined with the class Appliance
    Three arguments are define: description of the sensor, a default status of not connected
    and number of appliances connected
    The methods are to set the status to connected or disconnected, retrieve the status,
    add new appliances and get the number of appliances connected
*/

#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <string>

using namespace std;

class Appliance
{
public:
    Appliance(string description);
    ~Appliance();
    void setStatus();
    string getStatus();
    void addAppliance();
    int getAppliancesConnected();

private:
    bool isConnected = false;
    string description = "";
    int numberAppliances = 0;

};

#endif // !APPLIANCE_H
