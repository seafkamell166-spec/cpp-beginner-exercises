// case c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int i;

	cout << "enter the value for I \n";

	cin >> i;
	switch (i + 10)
	{
	case 10:
		cout << " iam in case 1\n";
		break;

	case 20:
		cout << "iam in case 2\n";
		break;

	case 30:
		cout << "iam in case 3\n";
		break;

	default:
		cout << "iam in default\n";
	}
	

	return 0;


}

