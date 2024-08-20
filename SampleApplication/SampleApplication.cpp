// SampleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"


using namespace std;
int main()
{
	double x=0, y =0, result=0;
	char oper = '+';

	cout << "Calculator App" << endl << endl;
	cout << "Please enter the operation to perform. Format a+b | a-b | a*b | a/b" << endl;

	Calculator c;
	while (true) {
		cin >> x >> oper >> y;
		if (oper == '/' && y==0) {
			cout << "Attempted to divide by Zero!" << endl;
			continue;
		}
		else {
		result = c.calculate(x, oper, y);
		}
		cout << "Result " << "of " << x << oper << y << " is: " << result << endl;
	}

	return 0;

}

