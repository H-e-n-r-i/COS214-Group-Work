#include "EngineState.h"

 EngineState::EngineState(){}

EngineState::~EngineState(){}

void EngineState::setState(string state){
    this->state = state;
}

string EngineState::getState(){
    return state;
}

Running::Running(){
    state = "Running";
}

Running::~Running(){}

string Running::getState(){
    return state;
}

Idle::Idle(){
    state = "Idle";
}

Idle::~Idle(){}

string Idle::getState(){
    return state;
}

Damaged::Damaged(){
    state = "Damaged";
}

Damaged::~Damaged(){}

string Damaged::getState(){
    return state;
}