// array average.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
int main()
{
	int grade[3];
	float average ;

	cout << "enter your grades\n";
	cin >> grade[1] >> grade[2] >> grade[3];




	average = (grade[1] + grade[2] + grade[3]) / 3;

	cout << "*******************************************\n";

	cout << "your average grade quals to " << "   " << average << "\n";


}



