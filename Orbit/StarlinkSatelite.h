#ifndef STARLINKSATELITE_H
#define STARLINKSATELITE_H

//#include "User.h"
#include <string>
#include <vector>

class StarlinkSatelite {
    
    private:
        StarlinkSatelite* successor;
        //User* user;
        vecotr<StarlinkSatelite*> satelites;

    public:
        StarlinkSatelite();
        ~StarlinkSatelite();
        void sendMessage(std::string, std::string);
        void connect(std::string);
        void disconnect(std::string);
        void add(StarlinkSatelite* s);
        void remove();
};

#endif
