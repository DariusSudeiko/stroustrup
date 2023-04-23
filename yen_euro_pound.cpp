#include "std_lib_facilities.h"

int main()
{
    double ammount;
    char unit ;
    cout << " please enter an ammount followed by y,u,k,e,p: \n";
    cin >> ammount >> unit;
    switch (unit)
    {
        case 'y':
        cout << "ammount in dollars is: " << ammount*0.0076;
        break;
        case 'e':
        cout << "ammount in dollars is: " << ammount*1.09;
        break;
        case 'p':
        cout << "ammount in dollars is: " << ammount*1.25;
        break;
        case 'u': 
        cout << "the ammount in dollars is: " << ammount*0.15;
        break;
        case 'k':
        cout << "the ammount in dollars is: " << ammount*0.096;
        break;
        default:
        cout << "i don`t recognize this currency \n";
        break;

    }

    /*if (unit == 'y')
    cout << "ammount in dollars is: " << ammount*0.0076;
    else if (unit == 'e')
    cout << "ammount in dollars is: " << ammount*1.09;
    else if (unit == 'p')
    cout << "ammount in dollars is: " << ammount*1.25;
    else 
    cout << "i don`t recognize this currency \n";
    */
    return 0;
    }