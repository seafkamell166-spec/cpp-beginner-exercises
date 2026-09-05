#include<iostream>
#include<string>
using namespace std;

struct employee {

	int enumb;
	string ename;
	string job;
	float salary;
	float bonus;
	float total_salary;
};

void get_data(employee arr[], int size);
void set_bonus(employee &e, float percent);
void print(employee arr[], int size);

int main()
{
	
	employee emp { 5 };

	get_data(emp, 5);
	set_bonus(emp [1], 0.10f);
	print(emp, 5);
		
}
void print(employee arr[], int size)
{
	for (int i = 0; i < size; i++) {
		cout << "employee number =\n" << arr[i].enumb << "\n";
		cout << "employee name =\n" << arr[i].ename<< "\n";
		cout << "employee job =\n" << arr[i].job << "\n";
		cout << "employee salary =\n" << arr[i].salary<< "\n";
		cout << "employee bonus =\n" << arr[i].bonus << "\n";
		cout << "employee total salary =\n" << arr[i].salary * arr[i].bonus<< "\n";
		cout << "****************************************************\n";
	}


}

void set_bonus(employee &e, float percent)
{
	e.bonus = e.salary * percent;

}
void get_data(employee arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "enter emp no,employee name ,job"<<i+1<<"\n";

		cin >> arr[i].enumb >> arr[i].ename >> arr[i].job;

		if (arr[i].job == "manger")
			arr[i].salary = 5000;
		else if (arr[i].job == "engineer")
			arr[i].salary = 3000;
		else if (arr[i].job == "clerk")
			arr[i].salary = 2000;
		else
			arr[i].salary = 1000;
	}
	
}