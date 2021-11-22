#include "TestPhase.h"

TestPhase::TestPhase()
{

    std::vector<Cargo *> cargo = this->loadCargo();
    std::vector<Crew *> crew = this->loadCrew();
    (hasCrew) ? spacecraft = new CrewDragon(cargo, crew) : spacecraft = new Dragon(cargo);

    double weight = spacecraft->getTotalWeight();
    Falcon9Configuration *F9 = new Falcon9Configuration();
    FalconHeavyConfiguration *FH = new FalconHeavyConfiguration();
    Rocket *nine = F9->stageOne();
    Rocket *heavy = FH->stageOne();

    nine->setSpaceCraftWeight(weight);
    heavy->setSpaceCraftWeight(weight);
    if (optimal(nine) < optimal(heavy))
    {
        rocket = nine;
        delete heavy;
        rocketConfigurator = F9;
        delete FH;
        OptimalValue = optimal(nine);
    }
    else
    {
        rocket = heavy;
        delete nine;
        rocketConfigurator = FH;
        delete F9;
        OptimalValue = optimal(heavy);
    }

    if (!hasCrew)
    {
        Spacecraft *temp = new CrewDragon(cargo, crew);
        CheckCase(temp);
    }
}

void TestPhase::CheckCase(Spacecraft *in)
{
    double weight = in->getTotalWeight();
    Falcon9Configuration *F9 = new Falcon9Configuration();
    FalconHeavyConfiguration *FH = new FalconHeavyConfiguration();
    Rocket *nine = F9->stageOne();
    Rocket *heavy = FH->stageOne();

    nine->setSpaceCraftWeight(weight);
    heavy->setSpaceCraftWeight(weight);
    if (optimal(nine) < optimal(heavy) && optimal(nine) < optimal(rocket))
    {
        delete rocket;
        rocket = nine;
        delete heavy;
        delete rocketConfigurator;
        rocketConfigurator = F9;
        delete FH;
        OptimalValue = optimal(nine);
        delete spacecraft;
        spacecraft = in;
        return;
    }
    else
    {
        if (optimal(heavy) < optimal(rocket))
        {
            delete rocket;
            rocket = heavy;
            delete nine;
            delete rocketConfigurator;
            rocketConfigurator = FH;
            delete F9;
            OptimalValue = optimal(heavy);
            delete spacecraft;
            spacecraft = in;
            return;
        }
    }
    delete in;
}

double TestPhase::optimal(Rocket *in)
{
    return in->getTotalWeight() * in->getMultiplier();
}

std::vector<Cargo *> TestPhase::loadCargo()
{
    int in = 0;
    std::vector<Cargo *> cargo;
    std::cout << "How many items of cargo would you like to load?/n";
    std::cin >> in;
    for (int i = 0; i < in; i++)
    {
        cargo.push_back(new Cargo());
    }
}

std::vector<Crew *> TestPhase::loadCrew()
{
    int in = 0;
    std::vector<Crew *> crew;
    std::cout << "How many crew members are coming with?\n";
    std::cin >> in;
    if (in != 0)
        hasCrew = true;
    for (int i = 0; i < in; i++)
    {
        crew.push_back(new Crew());
    }
}