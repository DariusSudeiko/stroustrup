#include "std_lib_facilities.h"

int main(){
vector<string>game={"rock", "paper", "scissors"};
cout << "Press r for rock , p for paper , s for scissors \n";
cout << "enter number from 1-3 \n ";
cout << "Rock paper scissors GO!  \n";
char symbol;
int choice;
cin >> symbol >> choice;
switch(symbol){
case 'r':
if (game[choice-1]=="rock")
    cout << "draw \n";
    else if (game[choice-1]=="paper")
    cout << "paper covers rock \n";
    else if (game[choice-1]=="scissors")
    cout << "rock breaks scissors \n";
    else 
    cout << "invalid value \n";
    break;
case 'p':
if (game[choice-1]=="rock")
    cout << "rock covers paper \n";
    else if (game[choice-1]=="paper")
    cout << "draw! \n";
    else if (game[choice-1]=="scissors")
    cout << "scissors cut paper \n";
    else 
    cout << "invalid value \n";
    break;
case 's':
if (game[choice-1]=="rock")
    cout << "rock breaks scissors \n";
    else if (game[choice-1]=="paper")
    cout << "scissors cut paper \n";
    else if (game[choice-1]=="scissors")
    cout << "draw! \n";
    else 
    cout << "invalid value \n";
    break;
    default:
    cout << "invalid characheter \n";
    }

}