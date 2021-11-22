#include "MessageSignal.h"
#include <string>

using namespace std;

MessageSignal::MessageSignal(string q, string w)
{
	s->setID(id);
	M = w;
}

MessageSignal::~MessageSignal()
{
}

void MessageSignal::signal()
{
	OrbitalControl* OC = new OrbitalControl();
	OC->connect(M);
}
