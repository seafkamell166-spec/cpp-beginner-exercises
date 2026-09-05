// area and volume of sphere function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>

using namespace std;

float area(int Area);
float volume(int Volume);

int main()
{
    int radius;
    cout << "enter the redius\n";
    cin >> radius;

    cout << "the area is" << area(radius) << "\n";

    cout << "the volume is" << volume(radius) << "\n";
}

float area(int Area)
{
    return 4 * 3.14 * Area * Area;
}
float volume(int Volume)
{
    return 0.75 * 3.14 * Volume * Volume;
}