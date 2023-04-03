#include "std_lib_facilities.h"

int main()
{
    cout << "put in an operation followed by two operands: ";
    double num1, num2;
    string operation;
    cin >> operation >> num1 >> num2;
    if (operation == "+")
    cout << "answer is \n" << num1 + num2;
    else if (operation == "-")
    cout << "answer is \n" << num1 - num2;
    else if (operation == "*")
    cout << "answer is \n" << num1*num2;
    else if (operation == "/")
    cout << "answer is \n" << num1/num2;
    else
    cout << "something went wrong \n";
    }
