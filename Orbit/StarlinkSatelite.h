#ifndef StarlinkSatelite_H
#define StarlinkSatelite_H

#include <string>
using namespace std;

class StarlinkSatelite
{
private:
    string id;

protected:
    StarlinkSatelite *next;
    friend StarlinkSatelite;

public:
    StarlinkSatelite(string);
    ~StarlinkSatelite();
    string getID();
    void attatch(StarlinkSatelite *);
};

#endif