// c++ 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
 

#include <iostream>
using namespace std;

int main()
{
	// this is the input from user

	int width;
	int length;
	int area;
	cout << "please enter rectangle wedth and length\n";
	cin >> width;

	
	cin >> length;

	// processing 
	area = width * length;

		//output 
	cout <<"Area of rectangle equal "<<width * length <<"\n";

	return 0;
}
