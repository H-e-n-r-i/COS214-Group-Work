#ifndef ORBITALCONTROL_H
#define ORBITALCONTROL_H

#include "StarlinkSatelite.h"

class OrbitalControl
{

private:
    OrbitalControl *orbit;
    StarlinkSatelite *satelite;
    int numSatelites;

public:
    OrbitalControl *getOrbit();

    void sendMessage(std::string, std::string);
    void connect(std::string);
    void disconnect(std::string);
    void setNumSatelites(int n);
    int getNumSatelites();
    void createSatelites(int n);
    OrbitalControl();
    ~OrbitalControl();

protected:
    OrbitalControl(OrbitalControl &) = delete;
    OrbitalControl &operator=(const OrbitalControl &) = delete;
};

#endif
