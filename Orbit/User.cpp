#include "User.h" //The Invoker
User::User(){
	connectSignal = new ConnectSignal();
	disconnectSignal = new DisconnectSignal();
	messageSignal = new MessageSignal();
}

User::~User(){}

void User::connect(string id){
	connectSignal->setID(id);
	connectSignal->signal();
}

void User::disconnect(string id){
	disconnectSignal->setID(id);
	disconnectSignal->signal();
}

void User::sendMessage(string id, string message){
	messageSignal->setID(id);
	messageSignal->message(message);
}

void User::loadSatitiles(int n){
	Signal* sig = new Signal();
	OrbitalControl* o = sig->getOrbitControl(n);
	o->createSatelites();

	connectSignal->setOrbitController(o);
	disconnectSignal->setOrbitController(o);
	messageSignal->setOrbitController(o);
}