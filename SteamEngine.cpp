using namespace std;
#include "ExternalCombustionEngine.h"
#include "SteamEngine.h"
#include<iostream>
SteamEngine::SteamEngine()
{
    input = 0;
    output = 0;
}

SteamEngine::~SteamEngine()
{
}

void SteamEngine::set()
{
    cout << "Enter the Input Power :";
    cin >> input;
    cout << "Enter the Output Power :";
    cin >> output;
}

float SteamEngine::GetEfficiency()
{
    set();
    return (output / input)*100;
}