//State DP
// Robyn
//Context

#include "LaunchController.h"
#include <iostream>
#include <string>

using namespace std;

LaunchController::LaunchController()
{
<<<<<<< HEAD
	SC = new Dragon();
=======
>>>>>>> robyn
}

LaunchController::~LaunchController()
{
<<<<<<< HEAD
	delete SC;
	SC = 0;
=======
>>>>>>> robyn
}

void LaunchController::change()
{
<<<<<<< HEAD
	SC->handle(this);
}

string LaunchController::getSpacecraft()
{
	return SC->getSpacecraft();
=======
}

Spacecraft* LaunchController::getSpacecraft()
{
	return SC;
>>>>>>> robyn
}

void LaunchController::setSpacecraft(Spacecraft* sc)
{
<<<<<<< HEAD
	delete SC;
=======
>>>>>>> robyn
	SC = sc;
}