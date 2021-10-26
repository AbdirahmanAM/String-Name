// String Name.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Capturing String data type and limitations of cin>> \n";
	string myName;
	cout << "Input your full name: ";
	//getline() will output full Mike Franks
	getline(cin, myName);
	//cin>> will output Mike only
	//cin >> myName;
	cout << "\n";
	//cout << "Hey. Your name using cin>> is: " << myName << endl;
	cout << "Hey. Your name using getline() function is: " << myName << endl;

	// Input full name: Mike Franks
	// Hey. Your name is: Mike

	return 0;
}