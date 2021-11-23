#ifndef ORBITALCONTROL_H
#define ORBITALCONTROL_H

#include "StarlinkSatelite.h"
#include <string>
#include<list>
#include <iostream>
using namespace std;

class OrbitalControl
{

private:
    // OrbitalControl *orbit;
    list<StarlinkSatelite*> satelites;
    int numSatelites;

public:
    void sendMessage(string, string);
    void receiveMessage(string, string);
    void connect(string);
    void disconnect(string);
    void setNumSatelites(int n);
    int getNumSatelites();
    void createSatelites();
    list<StarlinkSatelite*> getSatelites();
    OrbitalControl(int n);
    ~OrbitalControl();

// protected:
//     OrbitalControl(OrbitalControl &) = delete;
//     OrbitalControl &operator=(const OrbitalControl &) = delete;
};

#endif
