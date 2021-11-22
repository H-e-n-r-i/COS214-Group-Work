#include "LauncController.h"

LaunchController::LaunchController()
{
    this->totalWeight = 0;
    this->hasCrew = false;
    this->rocketConfigurator = nullptr;
    this->spacecraft = nullptr;
    this->rocket = nullptr;
}

LaunchController::LaunchController(LaunchController *in)
{
    this->totalWeight = in->totalWeight;
    this->hasCrew = in->hasCrew;
    this->rocketConfigurator = in->rocketConfigurator;
    this->rocket = in->rocket;
    this->spacecraft = in->spacecraft;
}