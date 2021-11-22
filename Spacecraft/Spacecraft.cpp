//State DP
//Robyn
//State

//Charl: Template

#include "Spacecraft.h"
#include "Load/Cargo.h"
#include <iostream>
#include <string>


Spacecraft::Spacecraft(){
	
}

Spacecraft::Spacecraft(std::vector<Cargo*> c){
	cargo=c;
}

Spacecraft::~Spacecraft(){
	cargo.clear();
}

int Spacecraft::getTotalWeight(){//template method
	return baseWeight+calcCrew()+calcCargo();
}
