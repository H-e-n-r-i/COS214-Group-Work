//Command DP
//Robyn
//Command Invoker

#include "User.h"
#include <iostream>
#include <string>

using namespace std;

User::User(Signal* C, Signal* M, Signal* D)
{
	Connect = C;
	Message = M;
	Disconnect = D;
}

User::User()
{
}

User::~User()
{
}

void User::SendMessage()
{
	Message->execute();
}

void User::Connect()
{
	Connect->execute();
}

void User::Disconnect()
{
	Disconnect->execute();
}