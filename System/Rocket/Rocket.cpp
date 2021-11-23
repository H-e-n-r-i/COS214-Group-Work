#include "Rocket.h"

Rocket::Rocket(){}

Rocket::Rocket(double baseWeight, double opLimit, string stage, string name){
    this->baseWeight = baseWeight;
    optimalLimit = opLimit;
    this->stage = stage;
    this->rocketType = name;

    engineStates.push_back(new Running());
    engineStates.push_back(new Idle());
    engineStates.push_back(new Damaged());

    this->assembleComposition();
}

Rocket::~Rocket(){}

double Rocket::getBaseWeight(){
    return baseWeight;
}

double Rocket::getOptimalLimit(){
    return optimalLimit;
}

double Rocket::getTotalWeight(){
    totalWeight = getBaseWeight() + getSpaceCraftWeight();
    return totalWeight;
}

double Rocket::getMultiplier(){
    double weight = getTotalWeight();
    double percentage = 0.0;
    multiplier = 1.0;

    if(weight > getOptimalLimit()){
        weight -= getOptimalLimit();
        percentage = (weight/getOptimalLimit())*100;

        if(percentage >= 0 && percentage <= 20){
            if(getRocketType() == "Falcon9")
                multiplier = 1.2;
            else
                multiplier = 1.2;
        }
        else if(percentage >= 21 && percentage <= 50){
            if(getRocketType() == "Falcon9")
                multiplier = 2.0;
            else
                multiplier = 2.2;
        }
        else{
            if(getRocketType() == "Falcon9")
                multiplier = 5.0;
            else
                multiplier = 3.0;
        }
    }

    return multiplier;
}

string Rocket::getRocketType(){
    return rocketType;
}

double Rocket::getSpaceCraftWeight(){
    return spaceCraftWeight;
}

void Rocket::assembleComposition(){
    /**
     * @param engine - to instantiate the Merlin Engine
     */
    Composition* engine;

    /**
     * @param core - to hold the composite cores which will attach engines
     */
    Composition* core;
    
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

void Rocket::inspectEngines(){
    list<Composition*>::iterator it;
    int core = 0;

    cout << endl << "========================================" << endl;
    cout << "Inspecting " << getStage() << " Engines..." << endl;
    cout << "========================================" << endl << endl;

    for(it = compositions.begin(); it != compositions.end(); it++){
        if(getStage() == "Stage 1"){            
            list<Composition*> engines = (*it)->getEngines();
            list<Composition*>::iterator engine;

            cout << "[ " << getRocketType() << " Core: " << ++core << " ]" << endl << endl;

            for(engine = engines.begin(); engine != engines.end(); engine++){
                cout << "Engine No: " << (*engine)->getEngineNumber() << endl;
                cout << "Engine Name: " << (*engine)->getEngineName() << endl;
                cout << "Engine Health: " << (*engine)->getEngineState() << endl << endl;
            }
        }   
        else{
            cout << "Engine No: " << (*it)->getEngineNumber() << endl;
            cout << "Engine Name: " << (*it)->getEngineName() << endl;
            cout << "Engine Health: " <<  (*it)->getEngineState() << endl << endl;
        }

        cout << endl;
    }
}

/**
 * @brief This modifies a rocket engine based depending of which section of the rocket it is of, either Stage 1 or 2 
 */
void Rocket::modifyEngineState(){
    inspectEngines();

    int changeState;
    int core = -1;
    int engine = -1;
    int repair = -1;
    Composition* eng;

    cout << endl << "========================================" << endl;
    cout << "Modifying " << getStage() << " Engines..." << endl;
    cout << "========================================" << endl << endl;

    cout << "NB: Select 999 to cancel" << endl << endl;

    if(getStage() == "Stage 1"){
        int coreSize = compositions.size();

        while(true){
            cout << "Select a Falcon9Core to Modify/Repair (1-" << coreSize << "): ";
            cin >> core;

            if(core == 999) return;

            if(core < 0 || core > coreSize){
                cout << "!!!!!!Invalid Core Selection!!!!!!!!!" << endl << endl;
                continue;
            }
            break;
        }

        --core;
        int engineMax = (*next(compositions.begin(), core))->getEngines().size();
        
        while(true){
            cout << "Select Engine to Modify: (1-" << engineMax << "): ";
            cin >> engine;

            if(engine == 999) return;

            if(engine < 0 || engine > engineMax){
                cout << "!!!!!!Invalid Engine Selection!!!!!!!!!" << endl << endl;
                continue;
            }
            break;
        }

        --engine;
        eng = (*next((*next(compositions.begin(), core))->getEngines().begin(), engine));
    }
    else
        eng = (*next(compositions.begin(), 0));

    while (true){
        cout << "Select New State: \n";

        if(eng->getEngineState() != (*next(engineStates.begin(), 0))->getState())
            cout << "1. Start Engine: " << endl;
        
        if(eng->getEngineState() != (*next(engineStates.begin(), 1))->getState())
            cout << "2. Stop Engine: " << endl;

        if(eng->getEngineState() != (*next(engineStates.begin(), 2))->getState())
            cout << "3. Damage Engine: " << endl;

        cin >> changeState;

        if(changeState == 999) return;

        int engSizes = engineStates.size();

        if(changeState < 0 || changeState > engSizes){
            cout << "!!!!!!Invalid State Selection!!!!!!!!!" << endl << endl;
            continue;
        }
        break;
    }

    --changeState;
    
    if(core != -1)
        (*next((*next(compositions.begin(), core))->getEngines().begin(), engine))->setEngineState((*next(engineStates.begin(), changeState)));
    else
        (*next(compositions.begin(), 0))->setEngineState((*next(engineStates.begin(), changeState)));
    
    // Observer notify()
    notify();

    if(!isReadyForLaunch()){
        inspectEngines();

        cout << endl << "Would you like to repair the engine? \n";
        cout << "1. Yes\n2. No - Abort Launch\n";
        cin >> repair;

        if(repair == 1) modifyEngineState();
        else { cout << endl << ".............Aborting Launch............." << endl << endl; }
    }
    else
        cout << endl << ".............Ready for Launch............." << endl << endl;
}

bool Rocket::isReadyForLaunch(){
    list<Composition*>::iterator it;

    for(it = compositions.begin(); it != compositions.end(); it++){
        if(getStage() == "Stage 1"){
            list<Composition*> engines = (*it)->getEngines();
            list<Composition*>::iterator eng;

            for(eng = engines.begin(); eng != engines.end(); eng++)
                if((*eng)->getEngineState() != (*next(engineStates.begin(), 0))->getState())
                    return false;
        }else{
            if((*it)->getEngineState() != (*next(engineStates.begin(), 0))->getState())
                    return false;
        }
    }

    return true;
}

void Rocket::notify(){
    list<Composition*>::iterator it;

    for(it = compositions.begin(); it != compositions.end(); it++){
        if(getStage() == "Stage 1"){ 
            list<Composition*> engines = (*it)->getEngines();
            list<Composition*>::iterator engine;

            for(engine = engines.begin(); engine != engines.end(); engine++)
                (*engine)->updateState();
        }
        else
            (*it)->updateState();
    }
}