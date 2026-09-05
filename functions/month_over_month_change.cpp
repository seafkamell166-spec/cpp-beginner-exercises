#include <iostream>
using namespace std;
int main() {
	int month1;
	cout << "enter month 1\n";
	cin >> month1;
	int month2;
	cout << "enter month 2\n";
	cin >> month2;

	float MoM = (month2 - month1)/ month1*100 ;

	cout << "the month over month is" << MoM << "\n";
	return 0;
}