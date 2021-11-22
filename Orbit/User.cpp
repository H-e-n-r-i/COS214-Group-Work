#include "User.h"
#include <string>

using namespace std;

User::User(string q)
{
	uID = q;
}

User::~User()
{
}

void User::connect(string q)
{
	signal->signal();
}

void User::disconnect(string q)
{
	signal->signal();
}

void User::sendMessage(string id, string message)
{
	signal->signal();
}