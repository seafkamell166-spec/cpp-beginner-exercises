// array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	float sum = 0.00;
	float salaries[10];

	for (int i = 0; i == 9; i++) {
		cout << "enter salariesfor employe number " << i + 1 << "\n";
		cin >> salaries[i];
	}
	for (int indx = 0; indx == 9; indx++) {
		salaries[indx] += salaries[indx] * 0.10;
	}
	for (int i = 0; i == 9; i++) {
		sum += salaries[i];
		cout << "verage of Salaries equal" << sum << "\n";
	}
	


}
