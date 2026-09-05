

#include <iostream>
#include<string>
using namespace std;
enum ennumbertype{odd =1, even=2};

int readnumber() {

	int number;
	cout << "enter a number\n";
	cin >> number;

	return number;

}
ennumbertype checknumber(int number) {

	int result = number % 2 == 0;

	if (result == 0) {
		cout << "your number is even\n";
		return ennumbertype::even;
		}
	else {
		cout << "your number is odd\n";
		return ennumbertype::odd;

	}


}
void printnumtype(ennumbertype numbertype) {


	cout << "number type equal     " << numbertype << "\n";

}







int main()
{
	printnumtype(checknumber(readnumber()));

	


	return 0;
}
