// 4.Define a class Name_Value that holds string and value
// Rework the excersize with a class
#include "std_lib_facilities.h"


class Name_Value{
    public:
    string name;
    int score;
    Name_Value(string name, int score)    
        :name(name), score(score) {}
    
    void print(){
        cout << name << " " << score << "\n";
    }
};

int main(){
vector<Name_Value> list;
    Name_Value *l = new Name_Value{"tommy", 2};
    list.push_back(*l);
    l->print();
    l->name = "mikey";
    l->score = 3;
    list.push_back(*l);
    l->print();
    delete l;
cout << "enter number and ill return the corresponding name";
int a;
cin >> a;
for(auto x:list)
    {
        if (x.score==a){
            cout << x.name <<  "\n";
            return 0;
        }
    }
    
};

/*
old version
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
}*/