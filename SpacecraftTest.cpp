#include "Launch/LaunchController.h"
#include "Spacecraft/Dragon.h"
#include "Spacecraft/CrewDragon.h"
#include "Spacecraft/Load/Crew.h"
#include "Spacecraft/Load/Cargo.h"
#include <vector>

int main() {
	LaunchController* lc = new LaunchController();
	
	//---- TEST STATE ----//
	cout<<"SWAPPING BETWEEN SPACECRAFTS:"<<endl;
	for(int i=0; i<4; i++){
		cout<<"Current space craft: "<<lc->getSpacecraftName()<<endl;
		cout<<"Changing spacecraft...."<<endl<<endl;
		lc->changeSpacecraft();
	}
	cout<<"Current space craft: "<<lc->getSpacecraftName()<<endl;
	cout<<"____________________________________"<<endl<<endl;
	delete lc;
	
	
	//---- TEST TEMPLATE ----//
	cout<<"LOADING DRAGON AND CREWDRAGON:"<<endl;
	// 1: DRAGON
	Spacecraft* dragon;
	
	std::vector<Cargo*> cargo;//cargo to load
	for(int i=0; i<10; i++)
		cargo.push_back(new Cargo(20));//load cargo
		
	dragon=new Dragon(cargo);
	cout<<"Dragon weight: "<<dragon->getTotalWeight()<<endl;
	
	// 2: CREWDRAGON
	Spacecraft* crewDragon;
	
	std::vector<Crew*> crew;//crew to load
	for(int i=0; i<10; i++)
		crew.push_back(new Crew());//load crew
	
	crewDragon=new CrewDragon(cargo,crew);
	cout<<"Crew dragon weight: "<<crewDragon->getTotalWeight()<<endl;
	
	
	return 0;
}
