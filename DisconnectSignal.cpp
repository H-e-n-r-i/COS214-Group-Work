//Command DP
//Robyn
//Concrete Command

#include "DisconnectSignal.h"
#include <iostream>
#include <string>

using namespace std;

DisconnectSignal::DisconnectSignal()
{
}

DisconnectSignal::DisconnectSignal(OrbitalControl* oc)
{
	OC = oc;
}

DisconnectSignal::~DisconnectSignal()
{
}

void DisconnectSignal::execute()
{
	OC->OrbitalDisconnect();
}