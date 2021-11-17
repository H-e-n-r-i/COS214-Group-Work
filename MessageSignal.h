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
public:
	MessageSignal() : Signal() {};
	~MessageSignal();
};

#endif