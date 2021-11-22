#include "StarlinkSatelite.h"
#include <string>
#include <vector>

using namespace std;

StarlinkSatelite::StarlinkSatelite()
{}

StarlinkSatelite::~StarlinkSatelite()
{
	vector<StarlinkSatelite*>::iterator it;
	for(it = satelites.begin(); it!=satelites.end(); ++it)
	{
		delete *it;
	}
}

void StarlinkSatelite::sendMessage(string q, string w)
{
	successor->sendMessage(q, w);
}

void StarlinkSatelite::connect(string q)
{
	successor->connect(q);
	add(successor);
}

void StarlinkSatelite::disconnect(string q)
{
	successor->disconnect(q);
	remove();
}

void StarlinkSatelite::add(StarlinkSatelite* s)
{
	satelites.push_back(s);
}

void StarlinkSatelite::remove()
{
	satelites.pop_back();
}
