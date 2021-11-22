//State DP
//Robyn
//Concrete State

//Charl: Template

#include "CrewDragon.h"
#include "Dragon.h"
#include "Load/Cargo.h"
#include "Load/Crew.h"
#include <iostream>
#include <string>

CrewDragon::CrewDragon(){
	baseWeight=200;
}

CrewDragon::CrewDragon(std::vector<Cargo*> c, std::vector<Crew*> cr):Spacecraft(c){
	crew=cr;
}

//---- State: ----/
void CrewDragon::handleChange(LaunchController* l){
	l->setSpacecraft(new Dragon());
}

std::string CrewDragon::getSpacecraftName(){
	return "Crew dragon";
}

//---- Template ----/

int CrewDragon::calcCrew(){//primitive
	int crewWeight=0;
	std::vector<Crew*>::iterator it;
	for(it=crew.begin(); it!=crew.end(); it++){
		crewWeight += (*it)->weight;
	}
	return crewWeight;
}

int CrewDragon::calcCargo(){//primitive
	int cargoWeight=0;
	std::vector<Cargo*>::iterator it;
	for(it=cargo.begin(); it!=cargo.end(); it++){
		cargoWeight+=(*it)->weight;
	}
	return cargoWeight;
}
