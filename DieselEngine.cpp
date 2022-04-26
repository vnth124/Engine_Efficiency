using namespace std;
#include "DieselEngine.h"
#include "InternalCombustionEngine.h"
#include <iostream>
DieselEngine::DieselEngine()
{
	input = 0;
	output = 0;
}

DieselEngine::~DieselEngine()
{
}

void DieselEngine::set()
{
	cout << "Enter the Input Power :";
	cin >> input;
	cout << "Enter the Output Power :";
	cin >> output;
}

float DieselEngine::GetEfficiency()
{
	set();
	return (output / input)*100;
}