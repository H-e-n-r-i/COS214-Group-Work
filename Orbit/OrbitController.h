#ifndef ORBITALCONTROL_H
#define ORBITALCONTROL_H

#include "StarlinkSatelite.h"

class OrbitalControl {

    private:
        OrbitalControl* orbit;
        StarlinkSatelite* satelite;

    public:
        OrbitalControl *getOrbit();

        void sendMessage(std::string, std::string);
        void connect(std::string);
        void disconnect(std::string);

    protected:
        OrbitalControl();
        ~OrbitalControl();

        OrbitalControl(OrbitalControl &) = delete;
        OrbitalControl &operator=(const OrbitalControl &) = delete;
};

#endif