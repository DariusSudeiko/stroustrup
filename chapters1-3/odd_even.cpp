#include "std_lib_facilities.h"

int main()
{
    cout << "please enter number ";
    int number;
    cin >> number;
    if(number%2==0)
    {
        cout << "the value " << number << " is even\n";
    }
    else
    {
        cout << "the value " << number <<  " is odd\n";
    }
}