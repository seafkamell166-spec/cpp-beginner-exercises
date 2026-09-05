#include <iostream>
#include<cmath>

using namespace std;

//ba3arf el function
int larger(int num1, int num2);

int main()
{
    int number1, number2;
    cout<< "enter two numbers\n";
    cin >> number1 >> number2;

    cout << "the larger Number is" << larger(number1, number2) << "\n";
    // el function larger momken ahot feha arkam mn 3ndy 
    //w momken adkhlha f math equation
}
int larger(int num1, int num2)
{
  //   lw ha3ml kda int max;

    if (num1 > num2)
        //   max = num1;
        return num1;
    else
        // max = num2;
        return num1;
  //  return max;
}
 