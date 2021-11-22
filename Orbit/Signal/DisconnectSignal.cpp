#include "DisconnectSignal.h"
#include <string>

using namespace std;

DisconnectSignal::DisconnectSignal(string id) //Constructor for DisconnectSignal
{
	s->setID(id);
}

DisconnectSignal::~DisconnectSignal() //Destructor for DisconnectSignal
{
}

void DisconnectSignal::signal()//execute function
{
	OrbitalControl* OC = new OrbitalControl();
	OC->connect("Disconnect");
}
