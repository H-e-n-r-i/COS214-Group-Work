#include "MessageSignal.h"
#include <string>

using namespace std;

MessageSignal::MessageSignal(string q, string w) //Constructor for MessageSignal
{
	s->setID(id);
	M = w;
}

MessageSignal::~MessageSignal() //Deconstructor for Message Signal
{
}

void MessageSignal::signal() //Execute function
{
	OrbitalControl* OC = new OrbitalControl();
	OC->connect(M);
}
