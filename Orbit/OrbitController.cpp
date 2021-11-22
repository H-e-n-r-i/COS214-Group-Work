#include "OrbitalControl.h"
#include <string>

using namespace std;

OrbitalControl* OrbitalControl::getOrbit()
{
	return orbit;
}

void OrbitalControl::sendMessage(string q, string w)
{
	satelite->sendMessage(q, w);
}

void OrbitalControl::connect(string q)
{
	satelite->connect(q);
}

void OrbitalControl::disconnect(string q)
{
	satelite->disconnect(q);
}

OrbitalControl::OrbitalControl()
{
}

OrbitalControl::~OrbitalControl()
{
}

OrbitalControl::OrbitalControl(OrbitalControl& q) 
{
}

OrbitalControl& OrbitalControl::operator=(const OrbitalControl& q)
{
}
