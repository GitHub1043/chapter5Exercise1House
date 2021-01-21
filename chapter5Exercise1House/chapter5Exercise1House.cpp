// This program makes a house using a function
// Written by: Ayden Holgate
// Date: Jan. 19, 2021

// chapter5Exercise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void roof();
void base();
void walk();

int _tmain(int argc, _TCHAR* argv[])
{// Start of program
	roof();
	base();
	walk();

	return 0;
}// End of program

void roof(){
	cout << "\t  /\\" << endl;
	cout << "\t /  \\" << endl;
	cout << "\t/____\\" << endl;
}

void base(){
	cout << "\t|    |" << endl;
	cout << "\t|____|" << endl;
}

void walk(){
	cout << "\t  **" << endl;
	cout << "\t  **********" << endl;
}
