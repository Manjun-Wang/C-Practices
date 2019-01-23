// mw4241_hw2_q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int dollars, cents;
	int sumQuarters, sumDimes, sumNickles, sumPennies;
	int totalDollars;

	cout << "Please enter your amount in the format of dollars and cents separated by a space:" << endl;
	cin >> dollars >> cents;
	totalDollars = 100*dollars + cents;

	sumQuarters = totalDollars / 25;
	totalDollars = totalDollars % 25;
	sumDimes = totalDollars / 10;
	totalDollars = totalDollars % 10;
	sumNickles = totalDollars / 5;
	totalDollars = totalDollars % 5;
	sumPennies = totalDollars / 1;

	cout << dollars << " dollars and " << cents << " are: " << endl;
	cout << sumQuarters << " quarters, " << sumDimes << " dimes, " << sumNickles << " nickles and " << sumPennies << " pennies" << endl;
	
	return 0;
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
