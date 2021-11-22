#ifndef STARLINKSATELITE_H
#define STARLINKSATELITE_H

//#include "User.h"
#include <string>

class StarlinkSatelite {
    
    private:
        StarlinkSatelite* successor;
        //User* user;

    public:
        void sendMessage(std::string, std::string);
        void connect(std::string);
        void disconnect(std::string);
};

#endif