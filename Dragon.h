//State DP
//Robyn
//Concrete State

#ifndef DRAGON_H
#define DRAGON_H

#include "Spacecraft.h"
#include <iostream>
#include <string>

using namespace std;

class Dragon : public Spacecraft
{
public:
	Dragon() : Spacecraft() {};
	~Dragon();
};

#endif