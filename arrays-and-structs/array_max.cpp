

#include <iostream>
using namespace std;

int max(int array[], int counter)
{
    int result = 0;
    
    for (int i = 0; i < counter; i++)
        if (result < array[i])
            result = array[i];
    cout << "the max is  " << result << "\n";

    return result;
        
}


int main()
{
    int array[7];
    int result=0;
    int counter = size(array);
    
    for (int i = 0; i < counter; i++)
    {
        cout << "enter the numbers\n";
        cin >> array[i];
    }
    for (int i = 0; i < counter; i++)
        cout <<" " << array[i];


    max(array, counter);

        

        return 0;
}



