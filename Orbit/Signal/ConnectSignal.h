//Command DP
//Robyn
//Concrete Command

#ifndef CONNECTSIGNAL_H
#define CONNECTSIGNAL_H

#include "Signal.h"
#include <iostream>
#include <string>

using namespace std;

class ConnectSignal : public Signal
{
private:
	OrbitalControl* OC;
public:
	ConnectSignal() : Signal() {};
	ConnectSignal(OrbitalControl* oc) : Signal(OrbitalControl* oc) {};
	~ConnectSignal();
	void execute();
};

#endif