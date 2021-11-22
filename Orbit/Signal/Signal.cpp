#include "Signal.h"
#include <string>

using namespace std;

Signal::Signal()
{
  ID = "";
}

Signal::~Signal()
{}

virtual void Signal::signal()
{
}

string Signal::getID()
{
  return ID;
}

void Signal::setID(string s)
{
  ID = s;
}
