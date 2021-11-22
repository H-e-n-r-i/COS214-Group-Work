#include "OrbitalControl.h"
#include <string>
#include <iostream>

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

int OrbitalControl::getNumSatelites()
{
	return numSatelites;
}

void OrbitalControl::setNumSatelites(int n)
{
	numSatelites = n;
}

void OrbitalControl::createSatelites(int n)
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

OrbitalControl::OrbitalControl()
{
	numSatelites = 0;
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
