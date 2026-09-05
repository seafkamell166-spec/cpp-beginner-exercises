// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;


struct structgrade {
	string firstname;
	string universty;
	float gpa;
	string major;
};
void getinfo(structgrade &info) {
	cout << "enter your name\n";
	cin >> info.firstname;
	cout << "enter your eniversity\n";
	cin >> info.universty;
	cout << "enter your major\n";
	cin >> info.major;
	cout << "enter your GPA\n";
	cin >> info.gpa;
}
bool eligiblty(structgrade info) {
	if (info.gpa >= 2.9 && info.major == "cs") {
		cout << "we have a job for you\n";

	}
	else
		cout << "we don't have a job for you\n";
	return 0;
}

int main()
{
	structgrade person1;

	getinfo(person1);
	eligiblty(person1);



}

