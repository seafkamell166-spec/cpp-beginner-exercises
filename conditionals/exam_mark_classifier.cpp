#include <iostream>
using namespace std;

int main()
{
	int marks;
	cout << "enter your mark";
	cin >> marks;

	if (marks > 0 && marks <= 100)
	{
		if (marks >= 90 && marks <= 100)
			cout << "excellent\n";
		else if (marks >= 75 && marks <= 89)
			cout << "very good\n";
		else if (marks >= 60 && marks <= 74)
			cout << "good\n";
		else if (marks >= 50 && marks <= 59)
			cout << "pass\n";
		else
			cout << "fail\n";
	}
	else
		cout << "invalid mark\n";





}
 