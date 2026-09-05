

#include <iostream>
#include<string>
using namespace std;
int main()
{
	string string1;
	cout << "enter a string\n";
	cin >> string1;
	string cleann;


	for (int i = 0; i < 5; i++)
	{
		if (string1[i] == '!')
			continue;
		else
		{
			cleann += string1[i];

		}
	}
	cout << cleann << "\n";


}
