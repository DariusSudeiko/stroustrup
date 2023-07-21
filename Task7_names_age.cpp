#include "../std_lib_facilities.h"

int main(){
    try{
    string name;
    vector<string>names;
    vector<double>ages;
    int age;
    cout << "Enter five names " << endl;
    while(names.size()<5){
    cin >> name;
    names.push_back(name);
    }

    for (int i=0;i<names.size();++i){
        cout << "what is the age of " << names[i] << " ";
        cin >> age;
        ages.push_back(age);
    }
    vector<string>namecopy = names;
    vector<double>agecopy;

    sort(names.begin(), names.end());

    for(string n : names){
        for (int i=0;i<namecopy.size();++i){
            if(n == namecopy[i]){
                agecopy.push_back(ages[i]);
            }
    }
    }    
    for (int i=0;i<names.size();++i){
        cout << names[i] << " " << ages[i] << endl;
    }
    for (int i=0;i<namecopy.size();++i){
        cout << namecopy[i] << " = " << agecopy[i] << endl;
    }
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