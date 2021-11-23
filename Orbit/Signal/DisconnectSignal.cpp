#include "DisconnectSignal.h"

DisconnectSignal::DisconnectSignal():Signal(){}

DisconnectSignal::~DisconnectSignal(){}

void DisconnectSignal::signal(){
	cout << "Disconnecting Satelite: [" << getID() << "]" << endl;
	orbitController->disconnect(getID());
}