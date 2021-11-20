#include "Rocket.h"

Rocket::Rocket(){}

Rocket::Rocket(double baseCost, double opLimit, string stage, string name){
    this->baseCost = baseCost;
    optimalLimit = opLimit;
    this->stage = stage;
    this->rocketType = name;

    this->assembleComposition();
}

Rocket::~Rocket(){
    delete engine;
    delete core;
}

double Rocket::getBaseCost(){
    return baseCost;
}

double Rocket::getOptimalLimit(){
    return optimalLimit;
}

double Rocket::getTotalWeight(){
    return 0.0;
}

double Rocket::getSpaceCraftWeight(){
    return spaceCraftWeight;
}

void Rocket::assembleComposition(){
    if(stage == "Stage 1"){
        /** 
         * Merlin Engine Instantiation
         * NB: We use the reconstruct() method for the engine attachments
         */
        engine = new MerlinEngine();

        /**
         * @brief the engineCount represents the number of Merlin Engines in each 
         * Falcon9Core
         * @param engineCount 
         * @return int
         */
        int engineCount = 9;
        
        /**
         * @brief The 1st Stage's Falcon9 Core
         */
        core = new Falcon9Core();
        
        /**
         * @brief This is the attachment of Merlin Engines to the Falcon9Core
         */
        for(int i = 0; i < engineCount; i++)
            core->addEngine(engine->reconstruct());

        /**
         * @brief Construct saves a composition depending on whether it belongs
         * to the 1st OR 2nd Stage and whether it is a Falcon9/Heavy
         * 
         * NB: Falcon9 has a single core
         * NB: FalconHeavy has a 3 cores
         */
        if(rocketType == "Falcon9"){
           compositions.push_back(core);
        }else{
            /**
             * @section FalconHeavy
             * @param  cores - the number of Falcon9 cores
             */
            int cores = 2;

            compositions.push_back(core);

            for(int i = 0; i < cores; i++)
                compositions.push_back(core->reconstruct());            
        }
    }
    else{ 
        /**
         * @section This is the 2nd Stage Section
         * @brief In the second stage, both rocket types contain a single Vacuum Merlin Engine
         */
        engine = new VaccumMerlinEngine();
        compositions.push_back(engine->reconstruct());
    }
}

void Rocket::setSpaceCraftWeight(double weight){
    spaceCraftWeight = weight;
}

string Rocket::getStage(){
    return stage;
}

void Rocket::startEngines(){
    list<Composition*>::iterator it;
    for(it = compositions.begin(); it != compositions.end(); it++) 
        (*it)->startEngines();
}