#include "StarlinkSatelite.h"
#include <string>

using namespace std;

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