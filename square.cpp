#include "std_lib_facilities.h"

int main()
{
    int x = 0;
    cout << "enter x: ";
    cin >> x;
    int sqrx = 0;
    for(int i = 1; i <= x; ++i)
    {
        sqrx = sqrx + x;
    }
    cout << "squared is: " <<  sqrx << "\n";
    return 0;
}