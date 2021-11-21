//Command DP
//Robyn
//Command Command

#include "Command.h"
#include <iostream>
#include <string>

using namespace std;

Signal::Signal()
{
}

Signal::Signal(OrbitalControl* oc)
{
	OC = oc;
}

Signal::~Signal()
{
}

void Signal::execute()
{
}