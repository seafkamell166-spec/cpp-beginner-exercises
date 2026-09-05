// qwqw.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enclub{ahly,zamalek,ismaily,zed,pasc};
int main()
{
	enclub favclub;

	cout << "what is your favourite eg club\n";
	

	if (favclub == ahly)
		cout << "you can join\n";
	else
		cout << "you cant join";
	return 0;
}
