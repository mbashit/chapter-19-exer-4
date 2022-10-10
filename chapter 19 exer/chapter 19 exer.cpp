// chapter 19 exer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Write a C++ program that displays the following menu:
Convert Miles to Yards
Convert Miles to Feet
Convert Miles to Inches
It then prompts the user to enter a choice (of 1, 2, or 3) and a distance in
miles. Then, it calculates and displays the required value. Assume that
the user enters a valid value for the distance. However, if the choice
entered is invalid, an error message must be displayed. It is given that
1 mile = 1760 yards
1 mile = 5280 feet
1 mile = 63360 inches*/

#include <iostream>
using namespace std;

int main()
{
	int choice,miles, yards, feet, inches;

	cout << "enter the user choice:";
	cin >> choice;
	cout << "enter the amount: ";
	cin >> miles;

	switch (choice) {
	case 1:
		yards = (miles * 1760); 
		cout << "miles to yards:" << yards << "yards" << endl;
		break; 
	case 2:
		feet = (miles * 5280);
		cout << "miles to feet:" << feet << "feet" << endl;
		break; 
	case 3:
		inches = (miles * 63360);
			cout << "miles to inches:" << inches << "inches" << endl;
		break;
		
	default:
		cout << "invalid input " << endl;
	}
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
