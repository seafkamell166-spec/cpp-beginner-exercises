// if else if else.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int number1, number2;

    cout << "enter the 2 numbers\n";
    cin >> number1 >> number2;

    if (number1 == number2)
        cout << "both are equal\n";

    else if (number1 > number2)
        cout << "number1 is greater than number2\n";

    else 
        cout << "number2 is greater than number1\n";



    return 0;

}
