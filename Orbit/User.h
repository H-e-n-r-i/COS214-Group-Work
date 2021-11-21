//Command DP
//Robyn
//Command Invoker

#ifndef USER_H
#define USER_H

#include "Signal.h"
#include <iostream>
#include <string>

using namespace std;

class User
{
private:
	Signal* Connect;
	Signal* Message;
	Signal* Disconnet;
public:
	User(Signal* C, Signal* M, Signal* D);
	User();
	~User();
	void SendMessage();
	void Connect();
	void Disconnect();
	
};

#endif