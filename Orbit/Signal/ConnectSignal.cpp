#include "ConnectSignal.h"

ConnectSignal::ConnectSignal():Signal(){}

ConnectSignal::~ConnectSignal(){}

void ConnectSignal::signal(){
	cout << "Connecting to Satelite: [" << getID() << "]" << endl;
	orbitController->connect(getID());
}
