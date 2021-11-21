//State DP
//Robyn
//Concrete State

<<<<<<< HEAD
//Charl: Template

=======
>>>>>>> robyn
#include "Dragon.h"
#include <iostream>
#include <string>

using namespace std;

Dragon::Dragon()
{
}

Dragon::~Dragon()
{
}

void Dragon::handle(LaunchController* lc)
{
	lc->setSpacecraft(new CrewDragon());
}

string Dragon::getSpacecraft()
{
	return "Dragon";
<<<<<<< HEAD
}
=======
}
>>>>>>> robyn
