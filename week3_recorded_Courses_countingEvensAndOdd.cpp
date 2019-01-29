// counting evens and odds.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int val;
	int evensCount, oddsCount;

	cout << "please enter 4 positive integers, seperated by a space:" << endl;
	
	evensCount = 0;
	oddsCount = 0;
	cin >> val;
	if (val%2==0) {
		evensCount += 1;
	}
	else
	{
		oddsCount += 1;
	}
	cin >> val;
	if (val % 2 == 0) {
		evensCount += 1;
	}
	else
	{
		oddsCount += 1;
	}
	cin >> val;
	if (val % 2 == 0) {
		evensCount += 1;
	}
	else
	{
		oddsCount += 1;
	}
	cin >> val;
	if (val % 2 == 0) {
		evensCount += 1;
	}
	else
	{
		oddsCount += 1;
	}
	

	if (evensCount > oddsCount)
		cout << "More even numbers" << endl;
	else if (evensCount < oddsCount)
		cout << "More odd numbers" << endl;
	else
		cout << "Same number of evens and odds" << endl;
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
