#include "LaunchController.h"
#include "../Spacecraft/Spacecraft.h"
#include "../Spacecraft/Dragon.h"
#include "../Spacecraft/CrewDragon.h"
#include <string>

LaunchController::LaunchController()
{
    this->totalWeight = 0;
    this->hasCrew = false;
    this->rocketConfigurator = nullptr;
    this->spacecraft = nullptr;
    this->rocket = nullptr;
    //this->orbit = nullptr;
}

LaunchController::LaunchController(LaunchController *in)
{
    this->totalWeight = in->totalWeight;
    this->hasCrew = in->hasCrew;
    this->rocketConfigurator = in->rocketConfigurator;
    this->rocket = in->rocket;
    this->spacecraft = in->spacecraft;
    //this->orbit = in->orbit;
    delete in;
}

LaunchController::~LaunchController()
{
    delete rocket;
    delete rocketConfigurator;
    delete spacecraft;
    //delete orbit;
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
