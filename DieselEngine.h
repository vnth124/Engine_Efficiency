#pragma once
#include "InternalCombustionEngine.h"
class DieselEngine :
        public InternalCombustionEngine
    {
    private:
        float input;
        float output;

    public:
        DieselEngine();
        ~DieselEngine();
        void set();
        float GetEfficiency();
    };


