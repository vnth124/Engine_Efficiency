#pragma once
#include "InternalCombustionEngine.h"
class PetrolEngine :
    public InternalCombustionEngine
{
private:
    float input;
    float output;

public:
    PetrolEngine();
    ~PetrolEngine();
    void set();
    float GetEfficiency();
};

