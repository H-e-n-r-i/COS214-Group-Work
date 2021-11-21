//State DP
// Robyn
//Context

#include "LaunchController.h"
#include <iostream>
#include <string>

using namespace std;

LaunchController::LaunchController()
{
	SC = new Dragon();
}

LaunchController::~LaunchController()
{
	delete SC;
	SC = 0;
}

void LaunchController::change()
{
	SC->handle(this);
}

string LaunchController::getSpacecraft()
{
	return SC->getSpacecraft();
}

void LaunchController::setSpacecraft(Spacecraft* sc)
{
	delete SC;
	SC = sc;
}