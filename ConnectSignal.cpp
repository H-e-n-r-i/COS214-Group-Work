//Command DP
//Robyn
// Concrete Command

#include "ConnectSignal.h"
#include <iostream>
#include <string>

using namespace std;

ConnectSignal::ConnectSignal()
{
}

ConnectSignal::ConnectSignal(OrbitalControl* oc)
{
	OC = oc;
}

ConnectSignal::~ConnectSignal()
{
}

void ConnectSignal::execute()
{
	OC->OrbitalConnect();
}
