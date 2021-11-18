//Command DP
//Robyn
//Concrete Command

#include "MessageSignal.h"
#include <iostream>
#include <string>

using namespace std;

MesssageSignal::MessageSignal()
{
}

MessageSignal::MessageSignal(OrbitalControl* oc)
{
	OC= oc;	
}

MessageSignal::~MessageSignal()
{
}

void MessageSignal::execute()
{
	OC->OrbitalMessage();
}