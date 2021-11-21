<<<<<<< HEAD
//State DP
//Robyn
// Context

#ifndef LAUNCHCONTROLLER_H
#define LAUNCHCONTROLLER_H

#include "Spacecraft.h"
#include <string>
#include <iostream>

using namespace std;

class LaunchController
{
private:
	Spacecraft* SC;
public:
	LaunchController();
	~LaunchController();
	void change();
	string getSpacecraft();
	void setSpacecraft(Spacecraft* sc);
};

#endif
=======
#ifndef LAUNCHCONTROLLER_H
#define LAUNCHCONTROLLER_H

class LaunchController
{
private:
public:
    LaunchController(/* args */);
    ~LaunchController();
};



#endif
>>>>>>> henri
