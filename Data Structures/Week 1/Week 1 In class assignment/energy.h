/*
    Description: Energy Management  is defined with the class EnergySystem
    Two arguments are define: description of the sensor and 
    the default status of not connected
    The methods are to set and get the status and two modes to manage the energy
    during day and night
*/

#ifndef ENERGY_H
#define ENERGY_H

#include <string>
using namespace std;

class EnergySystem
{
public:
    EnergySystem(string description);
    ~EnergySystem();
    void setStatus();
    string getStatus();
    string dayMode();
    string nightMode();

private:
    bool isConnected = false;
    string description;

};
#endif !ENERGY_H