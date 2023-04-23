#include "std_lib_facilities.h"

int main(){
    cout << "enter a unique name followed by a number: \n";
    cout << "enter NoName 0 to terminate \n";
    vector<string>names;
    vector<int>scores;
    string name;
    int score;
    while(cin >> name >> score){
    names.push_back(name);
    scores.push_back(score);
    for(int i=1;i<names.size();++i)
    {
        if (names[i]==names[i-1]){
            cout << "name is repeated \n";
            return 0;
        }
    }
    if (name=="NoName" && score==0){
            break;
        }
    }
    cout << "enter a name , ill show you the corresponding number: \n";
    string choice;
    cin >> choice;
    for (int i=0;i<names.size();++i)
    if (choice==names[i]){
        cout << scores[i] << " \n";
    }
}