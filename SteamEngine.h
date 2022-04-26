#pragma once
#include "ExternalCombustionEngine.h"
class SteamEngine :
    public ExternalCombustionEngine
{
private:
    float input;
    float output;

public:
    SteamEngine();
    ~SteamEngine();
    void set();
    float GetEfficiency();
};

