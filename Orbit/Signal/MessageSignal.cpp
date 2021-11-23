#include "MessageSignal.h"

MessageSignal::MessageSignal():Signal(){}

MessageSignal::~MessageSignal(){}

void MessageSignal::message(string msg){
	cout << "Sending Message to Satelite: [" << getID() << "]" << endl;
	orbitController->sendMessage(getID(), msg);
}