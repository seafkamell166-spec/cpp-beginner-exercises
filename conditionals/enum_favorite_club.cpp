// qwqw.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enclub{ahly,zamalek,ismaily,zed,pasc};
int main()
{
	enclub favclub;
	int choice;

	cout << "what is your favourite eg club\n";
	cout << "0 = ahly, 1 = zamalek, 2 = ismaily, 3 = zed, 4 = pasc\n";
	cin >> choice;
	favclub = static_cast<enclub>(choice);

	if (favclub == ahly)
		cout << "you can join\n";
	else
		cout << "you cant join";
	return 0;
}
