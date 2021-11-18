//Command DP
//Robyn
//Command Command

#ifndef SIGNAL_H
#define SIGNAL_H

#include "OrbitalControl.h"
#include <iostream>
#include <string>

using namespace std;

class Signal
{
private:
	ObritalControl* OC;
public:
	Signal();
	Signal(OrbitalControl* oc);
	~Signal();
	virtual void execute()=0;
};

#endif