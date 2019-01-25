// mw4241_hw2_q3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int totalDays, totalHours, totalMinutes;
	int jDays, jHours, jMinutes, bDays, bHours, bMinutes;
	int jSumMinutes, bSumMinutes;
	int SumMinutes;

	cout << "Please enter the number of days John has worked: ";
	cin >> jDays;
	cout << "Please enter the number of hours John has worked: ";
	cin >> jHours;
	cout << "Please enter the number of minutes John has worked: ";
	cin >> jMinutes;
	jSumMinutes = jDays * 24 * 60 + jHours * 60 + jMinutes;
	cout << '\n';

	cout << "Please enter the number of days Bill has worked: ";
	cin >> bDays;
	cout << "Please enter the number of hours Bill has worked: ";
	cin >> bHours;
	cout << "Please enter the number of minutes Bill has worked: ";
	cin >> bMinutes;
	bSumMinutes = bDays * 24 * 60 + bHours * 60 + bMinutes;

	SumMinutes = jSumMinutes + bSumMinutes;
	totalDays = SumMinutes / (24 * 60);
	SumMinutes = SumMinutes % (24 * 60);
	totalHours = SumMinutes / 60;
	SumMinutes = SumMinutes % 60;
	totalMinutes = SumMinutes;

	cout << '\n';
	cout << "The total time both of them worked together is: " << totalDays << " days, " << totalHours << " hours and " << totalMinutes << " minutes." << endl;
    
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
