//Command DP
//Robyn
//Receiver

#include "OrbitalControl.h"
#include <iostream>
#include <string>

using namespace std;

OrbitalControl::OrbitalControl()
{
}

OrbitalControl::~OrbitalControl()
{
}

OrbitalControl *OrbitalControl::getOrbit() {

	if (orbit == nullptr)
	{
		orbit = new OrbitalControl();
	}

	return orbit;
}

void OrbitalControl::OrbitalConnect()
{
	cout << "Connected." << endl;
}

void OrbitalControl::OrbitalMessage()
{
	cout << "Message Received." << endl;
}

void OrbitalControl::OrbitalDisconnect()
{
	cout << "Disconnected." << endl;
}
