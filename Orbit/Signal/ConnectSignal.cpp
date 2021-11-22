#include "ConnectSignal.h"
#include <string>

using namespace std;

ConnectSignal::ConnectSignal(String id)
{
}

ConnectSignal::~ConnectSignal()
{}

void ConnectSignal::signal()
{
	OrbitalControl* OC = new OrbitalControl();
	OC->connect("Connect");
}