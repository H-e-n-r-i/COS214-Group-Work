#include "User.h" //The Invoker
#include <string>

using namespace std;

User::User(string q) //Constructor for User
{
	uID = q;
}

User::~User() //Destructor for User
{
}

void User::connect(string q) //Calls the ConnectSignal function
{
	Connectsignal->signal();
}

void User::disconnect(string q) //Calls the DisconnectSignal function
{
	Disconnectsignal->signal();
}

void User::sendMessage(string id, string message) //Calls the MessageSignal function
{
	Messagesignal->signal();
}
