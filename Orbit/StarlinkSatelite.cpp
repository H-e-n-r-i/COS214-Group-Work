#include "StarlinkSatelite.h"
#include <string>

using namespace std;

StarlinkSatelite::StarlinkSatelite() //default constructor for StarlinkSatelite
{
	head = null;
	Name = "";
}

StarlinkSatelite::StarlinkSatelite(string n) //constructor for StarlinkSatelite
{
	head = null;
	Name = n;
}

StarlinkSatelite::~StarlinkSatelite() //Destructor for StarlinkSatelite
{
}

void StarlinkSatelite::sendMessage(string q, string w) //finds the right satelite and sends a message to that satelite
{
	string n = getName();
	while(head != null)
	{
		if(n == q)
		{
			head = successor;
			head->sendMessage(q, w);
			return;
		}
		else
		head = head->successor;
	}
}

void StarlinkSatelite::connect(string q) //connects a new satelite to the satelite network
{
	StarlinkSatelite* newNode = new StarlinkSatelite();
	setName(q);
	if(head == null)
	{
		head = newNode;
		newNode->connect(q);
		successor = null;
		newNode->successor = successor;
	}
	else
	{
		curr = head;
		while(successor != null)
		{
			curr = curr->successor;
		}
		curr->successor = newNode;
		successor = newNode;
		newNode->connect(q);
	}
	
}

void StarlinkSatelite::disconnect(string q) //removes a satelite from the network
{
	string n = getName();
	while(head != null)
	{
		if(n == q)
		{
			head = successor;
			head->disconnect(q);
			return;
		}
		else
		head = head->successor;
	}
}

bool StarlinkSatelite::getOnline() //checks to see if the satelite is online;
{
	return Online;
}

void StarlinkSatelite::setOnline(bool o) //sets the online variable of the satelite
{
	Online = o;
}

StarlinkSatelite* StarlinkSatelite::getHead() //returns the head of the satelite network
{
	return head;
}

void StarlinkSatelite::setName(string q) //sets the name of the satelite
{
	Name = q;
}

string StarlinkSatelite::getName() //returns the name of the satelite
{
	return Name;
}

void StarlinkSatelite::appendBatch(StarlinkSatelite* Node) //adds a batch of satelites to the network
{
	if(successor == null)
	{
		successor = Node;
	}
	else
		successor = successor->successor;
}
