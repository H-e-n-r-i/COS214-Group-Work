#ifndef CREWDRAGON_H
#define CREWDRAGON_H

#include "Spacecraft.h"
#include <vector>
#include <string>

class Cargo;
class Crew;
class CrewDragon : public Spacecraft {

    private:
        std::vector<Crew*> crew;

    public:
		CrewDragon();
		CrewDragon(std::vector<Cargo*> c, std::vector<Crew*> cr);
		void handleChange(LaunchController* l);
    	std::string getSpacecraftName();
		int calcCrew();//primitive
		int calcCargo();//primitive
};

#endif
