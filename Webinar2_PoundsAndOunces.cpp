// Week 2_webinar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
const int OUNCES_PER_POUND = 16
int main()
{
	int item1Pounds, item1Ounces;
	int item2Pounds, item2Ounces;
	int sumOfOunces, carriedOverPounds;
	int totalPounds, totalOunces;

	cout << "Please enter the weight of two items." << endl;
	cout << "For each item give its weight in pounds and onces, seperated by a space"<< endl;
	cout << "Item #1: ";
	cin >> item1Pounds >> item1Ounces;
	cout << "Item #2: ";
	cin >> item2Pounds >> item2Ounces;

	sumOfOunces = item1Ounces + item2Ounces;
	totalOunces = sumOfOunces % OUNCES_PER_POUND;
	carriedOverPounds = sumOfOunces / OUNCES_PER_POUND;
	totalPounds = item1Pounds + item2Pounds + carriedOverPounds;

	cout << "The combined weight is " << totalPounds << "pounds and " << totalOunces << "ounces." << endl;





	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

