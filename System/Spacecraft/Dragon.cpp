//State DP
//Robyn
//Concrete State

//Charl: Template

#include "Dragon.h"
#include "../Launch/LaunchController.h"
#include <iostream>
#include <string>
#include <math.h>
#include <vector>

Dragon::Dragon()
{
	baseWeight = 400; //kg
}

Dragon::Dragon(std::vector<Cargo *> c) : Spacecraft(c)
{
}

//---- State dp: ----//
void Dragon::handleChange(LaunchController *l)
{
	l->setSpacecraft((Spacecraft *)new CrewDragon());
}

std::string Dragon::getSpacecraftName()
{
	return "Dragon";
}

//---- Template ----//
int Dragon::calcCrew()
{ //primitive
	return 0;
}

int Dragon::calcCargo()
{ //primitive

	int cargoWeight = 0;
	std::vector<Cargo *>::iterator it;
	for (it = cargo.begin(); it != cargo.end(); it++)
	{
		cargoWeight += (*it)->weight;
	}

	int crates = int(ceil(((double)cargoWeight) / 250.0));
	return cargoWeight + crates * 10; //each crate weighs 10
}
