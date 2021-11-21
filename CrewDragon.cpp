//State DP
//Robyn
//Concrete State

//Charl: Template

#include "CrewDragon.h"
#include <iostream>
#include <string>

using namespace std;

CrewDragon::CrewDragon()
{
}

CrewDragon::~CrewDragon()
{
}

void CrewDragon::handle(LaunchController* lc)
{
	lc->setSpacecraft(new Dragon());
}

string CrewDragon::getSpacecraft()
{
	return "Crew Dragon ";
}
