#include "LaunchController.h"

LaunchController::LaunchController()
{
    this->totalWeight = 0;
    this->hasCrew = false;
    this->rocketConfigurator = nullptr;
    this->spacecraft = nullptr;
    this->rocket = nullptr;
    // this->orbit = nullptr;
}

LaunchController::LaunchController(LaunchController *in)
{
    this->totalWeight = in->totalWeight;
    this->hasCrew = in->hasCrew;
    this->rocketConfigurator = in->rocketConfigurator;
    this->rocket = in->rocket;
    this->spacecraft = in->spacecraft;
    // this->orbit = in->orbit;
    delete in;
}

LaunchController::~LaunchController()
{
    delete rocket;
    delete rocketConfigurator;
    delete spacecraft;
    // delete orbit;
}

void LaunchController::setSpacecraft(Spacecraft *in)
{
    delete spacecraft;
    spacecraft = in;
}