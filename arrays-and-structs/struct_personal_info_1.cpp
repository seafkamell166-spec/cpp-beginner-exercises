#include <iostream>
#include<string>
using namespace std;

struct structinfo {

    string firstname;
    string lastname;
    string phonenumb;
    int age;
};
void readinfo(structinfo& info)
{
    cout << "enter your first name\n";
    cin >> info.firstname;

    cout << "enter your last name\n";
    cin >> info.lastname;
    cout << "enter your age\n";
    cin >> info.age;
    cout << "enter your phone number\n";
    cin >> info.phonenumb;

}
void printinfo(structinfo info)
{
    cout << "***********************************************\n";
    cout << info.firstname << "\n";
    cout << info.lastname << "\n";
    cout << info.age << "\n";
    cout << info.phonenumb << "\n";
    cout << "****************************************************\n";
    
}
void readpersoninfo(structinfo person[2])
{
    readinfo(person[0]);
    readinfo(person[1]);
}
void printinfoperson(structinfo person[2]) {
    printinfo(person[0]);
    printinfo(person[1]);

}

int main()
{
    structinfo peroson1[2];

    readpersoninfo(peroson1);

    printinfoperson(peroson1);





}

