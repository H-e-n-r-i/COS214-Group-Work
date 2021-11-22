#include "OrbitController.h"
#include <string>
#include <iostream>

using namespace std;

OrbitalControl* OrbitalControl::getOrbit() //returns the orbit
{
	return orbit;
}

void OrbitalControl::sendMessage(string q, string w) //sends a message to a satelite
{
	satelite->sendMessage(q, w);
}

void OrbitalControl::connect(string q) //connects a satelite
{
	satelite->connect(q);
}

void OrbitalControl::disconnect(string q) //disconnects a satelite
{
	satelite->disconnect(q);
}

int OrbitalControl::getNumSatelites() //returns the number of satelites
{
	return numSatelites;
}

void OrbitalControl::setNumSatelites(int n) //sets the number of satelites
{
	numSatelites = n;
}

void OrbitalControl::createSatelites(int n) //creates a batch of satelites
{
	StarlinkSatelite* next = null;
	if(n > 60)
	{
		cout << "Too many satelites." << endl;
		return;
	}
	if(n <= 0)
	{
		cout << "No satelites being created." << endl;
		return;
	}
	int num = getNumSatelites();
	num += n;
	setNumSatelites(num);
	StarlinkSatelite* curr = new StarlinkSatelite();
	StarlinkSatelite* head = curr;
	curr->next = null;
	for(int q = 1; q <= n, q++)
	{
		StarlinkSatelite* Node = new StarlinkSatelite();
		curr->next = Node;
		Node->next = null;
	}
	satelite->appendBatch(head);
}

OrbitalControl::OrbitalControl() //constructor for OrbitalControl
{
	numSatelites = 0;
}

OrbitalControl::~OrbitalControl() //destructor for OrbitalControl
{
}

OrbitalControl::OrbitalControl(OrbitalControl& q) 
{
}

OrbitalControl& OrbitalControl::operator=(const OrbitalControl& q)
{
}
