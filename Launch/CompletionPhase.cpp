#include "CompletionPhase.h"

CompletionPhase::CompletionPhase() : LaunchController() {}

CompletionPhase::CompletionPhase(LaunchController *in) : LaunchController(in) {}

CompletionPhase::~CompletionPhase() {}

void CompletionPhase::launch()
{
    std::cout << "Spacecraft has returned home successfully!!\n";
}