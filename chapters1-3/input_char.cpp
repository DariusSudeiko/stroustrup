#include "std_lib_facilities.h"

int main()
{
    cout << "please enter a numeric form 0 to 4 value in words ";
    string value;
    cin >> value;
    
    if (value == "zero")
    cout << " 0 ";
    else if ( value == "one")
    cout << " 1 ";
    else if ( value == "two")
    cout << " 2 ";
    else if ( value == "three")
    cout << " 3 ";
    else if ( value == "four")
    cout << " 4 ";
    else
    cout << " thats not a number i know \n";
    
}