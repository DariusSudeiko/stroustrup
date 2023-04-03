#include "std_lib_facilities.h"

int main()
{   int pennies, nickels, dimes, quarters, half;
    double dollar;
    cout << "please enter the ammount of pennies";
    cin >> pennies;
    cout << "please enter the ammount of nickels";
    cin >> nickels;
    cout << "please enter the ammount of dimes ";
    cin >> dimes;
    cout << "please enter the ammount of quarters";
    cin >> quarters;
    cout << "please enter the ammount halves ";
    cin >> half;
    cout << "please enter the ammount of dollars ";
    cin >> dollar;
    cout << "you have " << pennies << " pennies\n"
        << "you have " << nickels << " nickels\n"
        << "you have " << dimes << " dimes \n"
        << "you have " << quarters << " quarters \n"
        << "you have " << half << " halves \n";
    dollar = dollar*100 + pennies + nickels*5 + dimes*10 + quarters*25 + half*50;
    cout << "you have " << dollar/100 << " dollars \n";
return 0;
}