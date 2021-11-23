#ifndef STARLINKSATELITE_H
#define STARLINKSATELITE_H
#include <string>
#include <iostream>
#include<list>
using namespace std;

class OrbitalControl;

class StarlinkSatelite{
    private:
        bool online;
        string id;

    public:
        StarlinkSatelite(string id);
        ~StarlinkSatelite();
        void receiveMessage(string, OrbitalControl*);
        void connect();
        void disconnect();
        void setOnline(bool);
        bool isOnline();
        string getID();
        void setID(string);
};

#endif
