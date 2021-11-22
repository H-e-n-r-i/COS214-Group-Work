#ifndef STARLINKSATELITE_H
#define STARLINKSATELITE_H

//#include "User.h"
#include <string>

class StarlinkSatelite {
    
    private:
        StarlinkSatelite* successor;
        StarlinkSatelite* head;
        StarlinkSatelite* curr;
        //User* user;
        bool Online;
        string Name;

    public:
        StarlinkSatelite();
        StarlinkSatelite(string n);
        ~StarlinkSatelite();
        void sendMessage(std::string, std::string);
        void connect(std::string);
        void disconnect(std::string);
        void setOnline(bool o);
        bool getOnline();
        StarlinkSatelite* getHead();
        string getName();
        void setName(string q);
};

#endif
