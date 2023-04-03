#include "std_lib_facilities.h"

int main()
{
    string name;
    cout << " please enter your name: ";
    cin >> name;
    cout << "Dear " << name << ",\n"
        << "    Hope all is well. " << "I have a question for you. \n";
    cout << " Please enter a name of a friend: ";
    string friend_name;
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?\n";
    char friend_sex = 0;
    cout <<  " If the friend is male please press `m`\n" 
        << " If the friend is female please press `f`\n";
    cin  >> friend_sex;
    if(friend_sex == 'm')
        cout << "If you see " << friend_name << " please ask him to call me\n";
    else if(friend_sex == 'f')
        cout << "if you see " << friend_name << " please ask her to call me\n";
    int age;
    cout << "please enter the age of your friend :\n";
    cin >> age;
    if(0 < age && age < 110)
        cout << "I hear you just had a birthday and you are " << age << " years old! \n";
        else
        simple_error("you`re kidding");
    if(age < 12)
        cout << "Next year you will be " << age+1;
        else if (age == 17)
            cout << "Next year you will be able to vote";
                else if (age>70)
                    cout << "I hope you`re enjoying retirement";
    cout << "\nYours sincerely,  " << name << "\n";
}