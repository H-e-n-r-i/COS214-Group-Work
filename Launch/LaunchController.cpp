#include "LaunchController.h"
#include "../Spacecraft/Spacecraft.h"
#include "../Spacecraft/Dragon.h"
#include "../Spacecraft/CrewDragon.h"
#include <string>

LaunchController::LaunchController()
{
    spacecraft = new Dragon();
}

LaunchController::~LaunchController()
{
	delete spacecraft;
	spacecraft = 0;
}

//State dp
void LaunchController::changeSpacecraft(){
	spacecraft->handleChange(this);
}

std::string LaunchController::getSpacecraftName(){
	return spacecraft->getSpacecraftName();
}

void LaunchController::setSpacecraft(Spacecraft* sc){
	delete spacecraft;
	spacecraft=sc;
}
//end of state dp
