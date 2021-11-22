#ifndef SPACECRAFT_H
#define SPACECRAFT_H

#include "../Launch/LaunchController.h"
#include <vector>
#include <string>

class LaunchController;
class Cargo;
class Spacecraft {

protected:
        int totalWeight;
        int baseWeight;
        std::vector<Cargo*> cargo;
    
    public:
		Spacecraft();
        Spacecraft(std::vector<Cargo*>);
        ~Spacecraft();

        std::vector<Cargo*> getCargo();

        
		//---- State: ----
		virtual void handleChange(LaunchController* l) = 0;
    	virtual std::string getSpacecraftName() = 0;
        
		//---- Template: ----
		int getTotalWeight();//template method
		virtual int calcCrew()=0;//primitive method
		virtual int calcCargo()=0;//prmitive method
		//vector<Cargo> getCargo()

};

#endif
