#include "Launch/LaunchController.h"
#include "Spacecraft/Dragon.h"
#include "Spacecraft/CrewDragon.h"
#include "Spacecraft/Load/Crew.h"
#include "Spacecraft/Load/Cargo.h"
#include <vector>
#include <iostream>

int main() {
	LaunchController* lc = new LaunchController();
	
	//---- TEST STATE ----//
	std::cout<<"SWAPPING BETWEEN SPACECRAFTS:"<<std::endl;
	for(int i=0; i<4; i++){
		std::cout<<"Current space craft: "<<lc->getSpacecraftName()<<std::endl;
		std::cout<<"Changing spacecraft...."<<std::endl<<std::endl;
		lc->changeSpacecraft();
	}
	std::cout<<"Current space craft: "<<lc->getSpacecraftName()<<std::endl;
	std::cout<<"____________________________________"<<std::endl<<std::endl;
	delete lc;
	
	
	//---- TEST TEMPLATE ----//
	std::cout<<"LOADING DRAGON AND CREWDRAGON:"<<std::endl;
	// 1: DRAGON
	Spacecraft* dragon;
	
	std::vector<Cargo*> cargo;//cargo to load
	for(int i=0; i<10; i++)
		cargo.push_back(new Cargo(20));//load cargo
		
	dragon=new Dragon(cargo);
	std::cout<<"Dragon weight: "<<dragon->getTotalWeight()<<std::endl;
	
	// 2: CREWDRAGON
	Spacecraft* crewDragon;
	
	std::vector<Crew*> crew;//crew to load
	for(int i=0; i<10; i++)
		crew.push_back(new Crew());//load crew
	
	crewDragon=new CrewDragon(cargo,crew);
	std::cout<<"Crew dragon weight: "<<crewDragon->getTotalWeight()<<std::endl;
	
	
	return 0;
}
