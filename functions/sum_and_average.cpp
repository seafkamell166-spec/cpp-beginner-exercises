// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>

using namespace std;
int sum(int num1 , int num2 , int num3);
float average(int num1,int num2,int num3);
int main()
{
    int n1, n2, n3;

    cout << "enter 3 numbers";
    cin >> n1 >> n2 >> n3;

    cout << "the sum equals to\n" << sum(n1, n2, n3) << "\n";

    cout << "averag equls to \n" << average(n1, n2, n3) << "\n";
}       
int sum(int num1 , int num2 , int num3 )
{
    return num1 + num2 + num3;
}
float average(int num1,int num2,int num3)
{
    return (num1 + num2 + num3) / 3;
}