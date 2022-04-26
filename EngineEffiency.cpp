// EngineEffiency.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

using namespace std;
#include <iostream>
#include <conio.h>
#include "DieselEngine.h"
#include "ExternalCombustionEngine.h"
#include "InternalCombustionEngine.h"
#include "PetrolEngine.h"
#include "SteamEngine.h"



int main()
{
	int choice, opt;
	cout << "Select a number to get efficiency for given engines:" << endl;
	cout << "1. Internal Combustion Engine \n2. External Combustion Engine \n" << endl;
	cout << "Enter your choice :";
	cin >> choice;
	cout << endl;

	switch (choice)
	{
	case 1:
	{
		cout << "1. Petrol Engine \n2. Diesel Engine \n" << endl;
		cout << "Enter your choice :";
		cin >> opt;
		switch (opt)
		{
		case 1:
		{
			PetrolEngine petrol;
			cout << "Efficiency for Petrol Engine is " << petrol.GetEfficiency() << endl;
			cout << endl;
			break;
		}
		case 2:
		{
			DieselEngine diesel;
			cout << "Efficiency for Diesel Engine is " << diesel.GetEfficiency() << endl;
			cout << endl;
			break;

		}
		default:
			cout << "Invalid choice";
			cout << endl;
			break;

		}
		break;
	}
	case 2:
	{
		cout << "1. Steam Engine \n" << endl;
		cout << "Enter your choice :";
		cin >> opt;
		switch (opt)
		{
		case 1:
		{
			SteamEngine steam;
			cout << "Efficiency for Steam Engine is " << steam.GetEfficiency() << endl;
			cout << endl;
			break;
		}
		default:
			cout << "Invalid choice";
			cout << endl;
			break;
		}
		break;
	
	}
	
	default:
		cout << "Invalid choice";
		cout << endl;
		break;



	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
