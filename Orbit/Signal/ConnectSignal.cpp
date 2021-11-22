#include "ConnectSignal.h"
#include <string>

using namespace std;

ConnectSignal::ConnectSignal(String id) //Constructor for ConnectSignal
{
	s->setID(id);
}

ConnectSignal::~ConnectSignal() //Destructor for ConnectSignal
{}

void ConnectSignal::signal() //execute function
{
	OrbitalControl* OC = new OrbitalControl();
	OC->connect("Connect");
}
