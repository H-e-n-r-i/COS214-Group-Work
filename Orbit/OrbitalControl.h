//Command DP
//Robyn
// Receiver

#ifndef ORBITALCONTROL_H
#define ORBITALCONTROL_H

#include <iostream>
#include <string>

using namespace std;

class OrbitalControl
{

private:
	OrbitalControl *orbit;

public:
	void OrbitalConnect();
	void OrbitalMessage();
	void OrbitalDisconnect();

	OrbitalControl *getOrbit();

protected:
	OrbitalControl();
	~OrbitalControl();

	OrbitalControl(OrbitalControl &) = delete;
	OrbitalControl &operator=(const OrbitalControl &) = delete;
};

#endif