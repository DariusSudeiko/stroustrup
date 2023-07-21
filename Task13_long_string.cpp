#include "../std_lib_facilities.h"

vector<int>ammount(vector<string>words){
    vector<int>lengths;
    for(string str:words){
    lengths.push_back(str.size());
    }
    return lengths;
}
string longest (vector<string>words){
string longish = "";
for (string str:words){
    if(str.size() > longish.size()){
        longish = str;
    }
}
return longish;
}
string shortest (vector<string>words){
string shortish = "asdasjsadnfl;kasmdlfkmasdl;kfm;laskdf;jaskfndkjasfdjfan;jadsfnkl;afsjnd;klfsajdn";
for (string str:words){
    if(str.size() < shortish.size()){
        shortish = str;
    }
}
return shortish;
}

int main(){
    try{
        vector<string>names={"damian","matilda","gerald","tom","samantha"};
        vector<int>lengts=ammount(names);

        string shor = shortest(names);
        string lon = longest(names);

        cout << "shortest:  " << shor <<  " \n"  << "longest:  " <<lon << endl;



        sort(names);

        cout << "first: " << names[0] << '\n'
        << "last: " << names[names.size() - 1] << '\n';


    }
    catch(std::exception& e) {
    std::cerr << "Exception: " << e.what() << '\n';
    return 1;
    }
    catch(...) {
    std::cerr << "Unknown exception\n";
    return 2;
    }
}