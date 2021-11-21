//State DP
//Robyn
//Concrete State

//Charl: Template

#ifndef CREWDRAGON_H
#define CREWDRAGON_H

#include "Spacecraft.h"
#include <iostream>
#include <string>

using namespace std;

class CrewDragon : public Spacecraft
{
public:
	CrewDragon() : Spacecraft() {};
	~CrewDragon();
	virtual void handle(LaunchController* lc) = 0;
	virtual string getSpacecraft();
};

#endif
