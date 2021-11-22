#include "LauncController.h"

LaunchController::LaunchController()
{
    this->totalWeight = 0;
    this->hasCrew = false;
    this->rocketConfigurator = nullptr;
    this->spacecraft = nullptr;
    this->rocket = nullptr;
}