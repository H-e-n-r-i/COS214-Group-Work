//Command DP
//Robyn
//Concrete Command

#ifndef DISCONNECTSIGNAL_H
#define DISCONNECTSIGNAL_H

#include "Signal.h"
#include <iostream>
#include <string>

using namespace std;

class DisconnectSignal : public Signal
{
private:
	OrbitalControl* OC;
public:
	DisconnectSignal() : Signal() {};
	DisconnectSignal(OrbitalControl* oc) : Signal(OrbitalControl* oc) {};
	~DisconnectSignal();
	void execute();
};

#endif