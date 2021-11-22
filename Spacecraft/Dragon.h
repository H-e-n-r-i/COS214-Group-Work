#ifndef DRAGON_H
#define DRAGON_H

#include "Spacecraft.h"
#include <string>

class Dragon : public Spacecraft {

    public:
		Dragon();
		Dragon(std::vector<Cargo*> c);
		void handleChange(LaunchController* l);
    	std::string getSpacecraftName();
		int calcCrew();//primitive
		int calcCargo();//primitive
};

#endif
