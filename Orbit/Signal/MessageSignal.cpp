#include "MessageSignal.h"
#include <string>

using namespace std;

MessageSignal::MessageSignal(string q, string w)
{
}

MessageSignal::~MessageSignal()
{
}

void MessageSignal::signal()
{
	OrbitalControl* OC = new OrbitalControl();
	OC->connect("Send Message");
}