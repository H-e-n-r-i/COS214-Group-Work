#ifndef STARLINKSATELITE_H
#define STARLINKSATELITE_H

//#include "User.h"
#include <string>

class StarlinkSatelite {
    
    private:
        StarlinkSatelite* successor;
        StarlinkSatelite* head;
        //User* user;
        bool Online;

    public:
        StarlinkSatelite();
        ~StarlinkSatelite();
        void sendMessage(std::string, std::string);
        void connect(std::string);
        void disconnect(std::string);
        void setOnline(bool o);
        bool getOnline();
        StarlinkSatelite* getHead();
};

#endif
