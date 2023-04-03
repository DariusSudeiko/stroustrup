#include "std_lib_facilities.h"

int main ()
{
    cout << "please input two floating-point values: ";
    double val1, val2;
    cin >> val1 >> val2;
    if (val1>val2)
    cout << val1 << " is larger than " << val2 << "\n";
    else if (val2 > val1)
    cout << val1 << " is smaller than " << val2 << "\n";
    cout << "sum is " << val1+val2
        << "\ndifference is " << val1-val2
        << "\nproduct is " << val1*val2
        << "\nratio is " << val1/val2 << "\n";

}