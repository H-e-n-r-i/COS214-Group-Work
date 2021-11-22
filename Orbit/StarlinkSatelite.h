#ifndef STARLINKSATELITE_H
#define STARLINKSATELITE_H

//#include "User.h"
#include <string>

class StarlinkSatelite {
    
    private:
        StarlinkSatelite* successor;
        //User* user;
        bool online;

    public:
        StarlinkSatelite();
        ~StarlinkSatelite();
        void sendMessage(std::string, std::string);
        void connect(std::string);
        void disconnect(std::string);
        void setOnline(bool o);
        bool getOnline();
};

#endif
