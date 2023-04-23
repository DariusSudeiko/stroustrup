#include "std_lib_facilities.h"
double num1,num2;
string word1,word2;
double regulate(string word1, string word2);

int main(){
    
    char symbol;
    cout << "please enter two numbers, followed by an operand: \n";
    cout << "(ctrl + c) to quit \n";
    while(cin >> word1 >> word2 >> symbol){
    regulate(word1,word2);
    switch(symbol){
        case '+':
        cout << num1+num2 << "\n";
        break;
        case '-':
        cout << num1-num2 << "\n";
        break;
        case '*':
        cout << num1*num2 << "\n";
        break;
        case '/':
        cout << num1/num2 << "\n";
        break;
        default:
        cout << "Invalid operand: \n";
        }
    }
}
double regulate(string word1, string word2){
        if (word1 == "zero" || word1 == "0")
        num1=0;
        else if (word1 == "one" || word1 == "1")
        num1=1;
        else if (word1 == "two" || word1 == "2")
        num1=2;
        else if (word1 == "three" || word1 == "3")
        num1=3;
        else if (word1 == "four" || word1 == "4")
        num1=4;
        else if (word1 == "five" || word1 == "5")
        num1=5;
        else if (word1 == "six" || word1 == "6")
        num1=6;
        else if (word1 == "seven" || word1 == "7")
        num1=7;
        else if (word1 == "eight" || word1 == "8")
        num1=8;
        else if (word1 == "nine" || word1 == "9")
        num1=9;
        if (word2 == "zero" || word2 == "0")
        num2=0;
        else if (word2 == "one" || word2 == "1")
        num2=1;
        else if (word2 == "two" || word2 == "2")
        num2=2;
        else if (word2 == "three" || word2 == "3")
        num2=3;
        else if (word2 == "four" || word2 == "4")
        num2=4;
        else if (word2 == "five" || word2 == "5")
        num2=5;
        else if (word2 == "six" || word2 == "6")
        num2=6;
        else if (word2 == "seven" || word2 == "7")
        num2=7;
        else if (word2 == "eight" || word2 == "8")
        num2=8;
        else if (word2 == "nine" || word2 == "9")
        num2=9;
        else
        cout << "invalid number \n";
        return num1,num2;
    }
