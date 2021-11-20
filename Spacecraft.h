//State DP
//Robyn
// State

#ifndef SPACECRAFT_H
#define SPACECRAFT_H

#include "LaunchController.h"
#include <iostream>
#include <string>

using namespace std;

class Spacecraft
{
public:
	Spacecraft();
	~Spacecraft();
	virtual void handle(LaunchController* lc) = 0;
	virtual string getSpacecraft() = 0;
};

#endif