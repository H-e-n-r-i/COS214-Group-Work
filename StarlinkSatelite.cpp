#include "StarlinkSatelite.h"
#include "OrbitController.h"

StarlinkSatelite::StarlinkSatelite(string id){
	this->id = id;
}

StarlinkSatelite::~StarlinkSatelite(){}

void StarlinkSatelite::receiveMessage(string msg, OrbitalControl* orb){
	if(isOnline()){
		cout << endl << "Admin Message: " << msg << endl;
		list<StarlinkSatelite*> satelites = orb->getSatelites();
		list<StarlinkSatelite*>::iterator it;

		for(it = satelites.begin(); it != satelites.end(); it++){
			if((*it)->isOnline()){
				if((*it)->getID() != this->getID()){
					cout << "Satelite [" << this->getID() << "] sends a communication signal to satelite [" << (*it)->getID() << "]" << endl;
				}
			}
			else
				orb->receiveMessage(getID(), "Satelite " + (*it)->getID() + " is offline...");
		}

		orb->receiveMessage(getID(), "Complete!");
	}
	else
		orb->receiveMessage(getID(), "Satelite Currently Offline!");
}

void StarlinkSatelite::connect(){
	online = true;
	cout << "Starlink " << getID() << " Successfully Connected" << endl;
}


void StarlinkSatelite::disconnect(){
	online = false;
	cout << "Starlink " << getID() << " Disconnected Successfully" << endl;
}

void StarlinkSatelite::setOnline(bool on){
	online = on;
}

bool StarlinkSatelite::isOnline(){
	return online;
}

string StarlinkSatelite::getID(){
	return id;
}

void StarlinkSatelite::setID(string id){
	this->id = id;
}