
#include <iostream>
using namespace std;

int min(int array[], int stop)
{
	int result = 0;
	for (int i = 0; i < stop; i++)
		if (array[i] < result)
			result = array[i];
	cout << "min number =  " << result << "\n";
	return result;
}

int main()
{
	int pure[6];

	int result = 0;
	int stop = size(pure);


	for (int i = 0; i < stop; i++)
	{
		cout << "enter the numbers\n";
		cin >> pure[i];
	}
	for (int i = 0; i < stop; i++)
		cout << pure[i]<<"\n";

	 min ( pure,  stop);




		return 0;

}

