// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;

struct structinfo {

	string firstName;
	string lastName;
	int age;
	string phoneNum;
};

void getInfo(structinfo &info)
{
	cout << "enter your first name\n";
	cin >> info.firstName;
	
	cout << "enter uour last name\n";
	cin >> info.lastName;

	cout << "enter your age\n";
	cin >> info.age;

	cout << "enter your phone number\n";
	cin >> info.phoneNum;
	
}
void printinfo(structinfo info) {

	cout << "*************************************\n";
	cout << " name ::" << info.firstName << "  " << info.lastName << "\n";
	cout << "your age::" << info.age << "\n";
	cout << "phone number::" << info.phoneNum << "\n";
	cout << "***************************************\n";
}


int main()
{
	structinfo perosnalinfo1,perosnalindo2,personalinfo3;
	getInfo(perosnalinfo1);
	printinfo(perosnalinfo1);

	getInfo(perosnalindo2);
	printinfo(perosnalindo2);

	getInfo(personalinfo3);
	printinfo(personalinfo3);



}




