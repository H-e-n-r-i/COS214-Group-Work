#ifndef USER_H
#define USER_H
#include<string>
#include "./Signal/ConnectSignal.h"
#include "./Signal/DisconnectSignal.h"
#include "./Signal/MessageSignal.h"

class User {
    private:
        Signal *connectSignal;
        Signal *disconnectSignal;
        Signal *messageSignal;
        Signal *loadSignal;
    
    public:
        User();
        ~User();
        void loadSatitiles(int);
        void connect(string = "All");
        void disconnect(string = "All");
        void sendMessage(string id, string message);
        //void receiveMessage(string id, string message);
};

#endif
