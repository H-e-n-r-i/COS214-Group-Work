#ifndef CREWDRAGON__H
#define CREWDRAGON__H

#include "Spacecraft.h"
#include <vector>
#include <string>

class LaunchController;

class CrewDragon : public Spacecraft
{
private:
	std::vector<Crew *> crew;

public:
	CrewDragon();
	CrewDragon(std::vector<Cargo *> c, std::vector<Crew *> cr);
	void handleChange(LaunchController *l);
	std::string getSpacecraftName();
	int calcCrew();	 //primitive
	int calcCargo(); //primitive
};

#endif
