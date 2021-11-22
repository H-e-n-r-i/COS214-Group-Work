#include "StarlinkSatelite.h"
#include <string>

using namespace std;

StarlinkSatelite::StarlinkSatelite()
{
	head = null;
}

StarlinkSatelite::~StarlinkSatelite()
{
}

void StarlinkSatelite::sendMessage(string q, string w)
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

void StarlinkSatelite::connect(string q)
{
	StarlinkSatelite* newNode = new StarlinkSatelite();
	setName(q);
	if(head == null)
	{
		head = newNode;
		newNode->connect(q);
		successor = null;
	}
	else
	{
		StarlinkSatelite* temp = head;
		head = newNode;
		newNode->successor = temp;
		newNode->connect(q);
	}
	
}

void StarlinkSatelite::disconnect(string q)
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

bool StarlinkSatelite::getOnline()
{
	return Online;
}

void StarlinkSatelite::setOnline(bool o)
{
	Online = o;
}

StarlinkSatelite* StarlinkSatelite::getHead()
{
	return head;
}

void StarlinkSatelite::setName(string q)
{
	Name = q;
}

string StarlinkSatelite::getName()
{
	return Name;
}
