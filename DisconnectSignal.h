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
public:
	DisconnectSignal() : Signal() {};
	~DisconnectSignal();
};

#endif