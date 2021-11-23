#include "OrbitController.h"

OrbitalControl::OrbitalControl(int n){
	numSatelites = n;
}

OrbitalControl::~OrbitalControl(){}

void OrbitalControl::sendMessage(string id, string msg){
	list<StarlinkSatelite*>::iterator it;

	for(it = satelites.begin(); it != satelites.end(); it++){
		if((*it)->getID() == id){
			(*it)->receiveMessage(msg, this);
		}
	}
}

void OrbitalControl::receiveMessage(string sid, string resp){
	cout << endl << "[Satelite Respose: ]\n";
	cout << "\tID: " << sid << endl;
	cout << "\tResponse: " << resp << endl << endl;
}
    
void OrbitalControl::connect(string id){
	list<StarlinkSatelite*>::iterator it;
	for(it = satelites.begin(); it != satelites.end(); it++){
		if(id != "All"){
			if((*it)->getID() == id){
				(*it)->connect();
			}
		}else (*it)->connect();
	}
}

void OrbitalControl::disconnect(string id){
	list<StarlinkSatelite*>::iterator it;

	for(it = satelites.begin(); it != satelites.end(); it++){
		if(id != "All"){
			if((*it)->getID() == id){
				(*it)->disconnect();
			}
		}else (*it)->disconnect();
	}
}

void OrbitalControl::setNumSatelites(int n){
	numSatelites = n;
}

int OrbitalControl::getNumSatelites(){
	return numSatelites;
}

void OrbitalControl::createSatelites(){
	for(int i = 0; i < numSatelites; i++){
		string tmp = "S"+to_string(i);
		satelites.push_back(new StarlinkSatelite("S"+to_string(i)));
	}
}

list<StarlinkSatelite*> OrbitalControl::getSatelites(){
	return satelites;
}