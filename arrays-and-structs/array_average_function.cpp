// array function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void readarray(float x[3])
{
    cout << "enter num1\n";
    cin >> x[0];
    cout << "enter num2\n";
    cin >> x[1];
    cout << "enter num3\n";
    cin >> x[2];
}
void averagearray (float x[3])
{
    float average = (x[0] + x[1] + x[2]) / 3;
    cout << "average numbs = " << average << "\n";
}



int main()
{
    float x[3];

    readarray(x );
    averagearray(x);

}

