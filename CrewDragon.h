//State DP
//Robyn
//Concrete State

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
};

#endif