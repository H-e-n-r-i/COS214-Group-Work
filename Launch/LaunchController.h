#ifndef LAUNCHCONTROLLER_H
#define LAUNCHCONTROLLER_H

#include "../Spacecraft/Spacecraft.h"
#include <string>

class Spacecraft;
class LaunchController
{

protected:
    Spacecraft *spacecraft;
    //OrbitalControl *orbit;

public:
    LaunchController();
    virtual ~LaunchController();
	// state dp:
	void changeSpacecraft();//it will simply just change the spacecraft type to the other spacecraft
	std::string getSpacecraftName();
	void setSpacecraft(Spacecraft* sc);
	// end of state dp
};

#endif
