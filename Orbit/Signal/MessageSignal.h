//Command DP
//Robyn
//Concrete Command

#ifndef MESSAGESIGNAL_H
#define MESSAGESIGNAL_H

#include "Signal.h"
#include <iostream>
#include <string>

using namespace std;

class MessageSignal : public Signal
{
private:
	OrbitalControl* OC;
public:
	MessageSignal() : Signal() {};
	MessageSignal(OrbitalControl* oc) : Signal(OrbitalControl* oc) {};
	~MessageSignal();
	void execute();
};

#endif