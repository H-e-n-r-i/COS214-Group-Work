#include "Signal.h"

Signal::Signal(){
  orbitController = new OrbitalControl(60);
}

Signal::Signal(string s){
  id = s;
}

Signal::~Signal(){
  delete orbitController;
}

void Signal::signal(){}
void Signal::message(string){}
void Signal::load(int){}

string Signal::getID(){
  return id;
}

void Signal::setID(string s){
   id = s;
}

OrbitalControl* Signal::getOrbitControl(int n){
  orbitController = new OrbitalControl(n);
  return orbitController;
}

void Signal::setOrbitController(OrbitalControl* o){
  orbitController = o;
}