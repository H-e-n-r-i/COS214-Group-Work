#include "DisconnectSignal.h"
#include <string>

using namespace std;

DisconnectSignal::DisconnectSignal(string id)
{
	s->setID(id);
}

DisconnectSignal::~DisconnectSignal()
{
}

void DisconnectSignal::signal()
{
	OrbitalControl* OC = new OrbitalControl();
	OC->connect("Disconnect");
}
