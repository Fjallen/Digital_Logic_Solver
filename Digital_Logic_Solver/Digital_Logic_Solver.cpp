// Digital_Logic_Solver.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <regex>

using namespace std;

int solver(int &list, int size );
int main()
{
	cout << "Welcome to the Digital Logic Solver!!" << endl;

	//Using dynamic memory allocation for variables
	int *variables = NULL;

	//Getting the size
	int sz;
	cin >> sz;

	variables = new int[sz];


	//Solver time
	int result = solver(*variables, sz);
	
	int iterations = pow(2,sz);

	//Thanks for using me
	cout << "The result is: " << result << "\nThanks for using me!" << endl;
	
	cin >> sz;
    return 0;
}

int solver(int &list, int size) {
	return 0;
}