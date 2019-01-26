// mw4241_hw2_q4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int int1, int2;
	cout << "Please enter two positive integers, separated by a space:" << endl;
	cin >> int1 >> int2;

	cout << int1 << " + " << int2 << " = " << int1 + int2 << endl;
	cout << int1 << " - " << int2 << " = " << int1 - int2 << endl;
	cout << int1 << " * " << int2 << " = " << int1 * int2 << endl;
	cout << int1 << " / " << int2 << " = " << (double)int1 / int2 << endl;
	cout << int1 << " div " << int2 << " = " << int1 / int2 << endl;
	cout << int1 << " mod " << int2 << " = " << int1 % int2 << endl;

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
