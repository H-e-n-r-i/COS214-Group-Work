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
	successor->sendMessage(q, w);
}

void StarlinkSatelite::connect(string q)
{
	successor->connect(q);
}

void StarlinkSatelite::disconnect(string q)
{
	successor->disconnect(q);
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
