//State DP
// Robyn
//Context

#include "LaunchController.h"
#include <iostream>
#include <string>

using namespace std;

LaunchController::LaunchController()
{
}

LaunchController::~LaunchController()
{
}

void LaunchController::change()
{
}

Spacecraft* LaunchController::getSpacecraft()
{
	return SC;
}

void LaunchController::setSpacecraft(Spacecraft* sc)
{
	SC = sc;
}