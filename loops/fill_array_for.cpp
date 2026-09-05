
#include <iostream>

using namespace std;
int main()
{
    int array[5];
    int input;
    cout << "enter 5 numbers\n";

    for (int i = 4; i < -1; i--)
    {
        cin >> input;
        input = array[i];
    }
    cout << "\n===============\n";
    for (int i = 0; i < 5; i++)
    {
        cout << array[i];
       }
       
   








        return 0;
    }












