#include "std_lib_facilities.h"

int main()
{
    cout << "please enter age and name\n";
    string name;
    double age;
    cin >> age >> name;
    cout << "hello " << name << " (age " << age*12 << " months)\n";

}