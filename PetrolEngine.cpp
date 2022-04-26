using namespace std;
#include <iostream>
#include "PetrolEngine.h"
#include "InternalCombustionEngine.h"
PetrolEngine::PetrolEngine()
{
	input = 0;
	output = 0;
}

PetrolEngine::~PetrolEngine()
{
}

void PetrolEngine::set()
{
	cout << "Enter the Input Power :";
	cin >> input;
	cout << "Enter the Output Power :";
	cin >> output;
}

float PetrolEngine::GetEfficiency()
{
	set();
	return (output / input)*100;
}