#include <iostream>
using namespace std; 
int main() {
	int fahrenheit;
	cout << "enter the tempreture\n";
	cin >> fahrenheit;


	double celsius = (fahrenheit - 32) / 1.8;
	cout << celsius;
	return 0;
}

