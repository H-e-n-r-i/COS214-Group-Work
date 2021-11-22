#ifndef USER_H
#define USER_H

#include "./Signal/Signal.h"

class User {

    private:
        std::string uID;
        Signal *Connectsignal;
        Signal* Disconnectsignal;
        Signal* Messagesignal;
    
    public:
        User(std::string);
        ~User();

        void connect(std::string);
        void disconnect(std::string);
        void sendMessage(std::string id, std::string message);
        //void receiveMessage(std::string id, std::string message);
};

#endif
