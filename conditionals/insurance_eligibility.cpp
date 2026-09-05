// if  else 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char martial, gender;
	int age;

	cout << "enter your martial status\n";
	cin >> martial;

	cout << "what is your gender\n";
	cin >> gender;

	cout << "what is your age\n";
	cin >> age;


	if (martial == 'm' || (martial == 's' && gender == 'm' && age > 30) || (martial == 's' && gender == 'm' && age > 25))

		cout<<"you will get insurance\n";
		 

	else
		cout<< "you will not get insurance\n";



   return 0;
}


