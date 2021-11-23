#ifndef ENGINESTATE_H
#define ENGINESTATE_H
#include<string>
using namespace std;

/**
 * @author Nhlamulo Maluleka
 * @section Bridge
 */

class EngineState{
    protected:
        string state;        

    public:
        EngineState();
        virtual ~EngineState();
        virtual void setState(string);
        virtual string getState() = 0;
};

class Running: public EngineState{
    public:
        Running();
        ~Running();
        virtual string getState();
};

class Idle: public EngineState{
    public:
        Idle();
        ~Idle();
        virtual string getState();
};

class Damaged: public EngineState{
    public:
        Damaged();
        ~Damaged();
        virtual string getState();
};

#endif //ENGINESTATE_H