#include "Signal.h"
#include <string>

using namespace std;

Signal::Signal() //Constructor for Signal
{
  ID = "";
}

Signal::~Signal() //Destructor for Signal
{}

virtual void Signal::signal() //execute functions  - virtual
{
}

string Signal::getID() //returns User ID
{
  return ID;
}

void Signal::setID(string s) //sets User ID
{
  ID = s;
}
