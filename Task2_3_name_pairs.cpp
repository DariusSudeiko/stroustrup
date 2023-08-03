#include "../std_lib_facilities.h"

class Name_pairs{
    vector<string>name {"johny","peety","looney","alpha","beta"};
    vector<double>age;
public:
    void read_names() //reads series of names
    {
        for (int i=0;i<name.size();++i){
            cout << name[i] << " ";
        }
        cout<<endl;
    };
    void read_ages(){ // prompts the user for an age for each name
    int n;
        for (int i=0;i<name.size();++i){
            cout <<name[i] << " ";
            cin >> n;
            age.push_back(n);
        }
    };
    /*void print() { // prints out the (name[i],age[i]) pairs (one per line),
    //in the order determined by the name vector
    cout << "-----------------------------------------------------------------------" << endl;
        for(int i=0;i<name.size();++i){
            cout << name[i] << " " << age[i] << endl;
        }
    };*/
    void sort1(){// sorts name vector in alphabetical 
    //order and reorganizes the age vector to match
        vector<string>namecopy = name;
        vector<double>agecopy;
        sort(name);
        for(string n : name){
        for (int i=0;i<namecopy.size();++i){
            if(n == namecopy[i]){
                agecopy.push_back(age[i]);
            }
            }
        }
        age=agecopy;  
    }

    const vector<string> get_name() const {
        return name;
    }

    const vector<double> get_age() const {
        return age;
    }
    };

    ostream& operator<<(ostream& os, const Name_pairs& d) {
    os << "-----------------------------------------------------------------------" << endl;
    const vector<string>& names = d.get_name();
    const vector<double>& ages = d.get_age();

    for (int i = 0; i < names.size(); ++i) {
        os << names[i] << " " << ages[i] << endl;
    }
    return os;
    };
    
    ostream& operator<<(ostream& os, const Name_pairs& d) {
    os << "-----------------------------------------------------------------------" << endl;
    const vector<string>& names = d.get_name();
    const vector<double>& ages = d.get_age();

    for (int i = 0; i < names.size(); ++i) {
        os << names[i] << " " << ages[i] << endl;
    }
    return os;
    };

    int main(){
    try{
        Name_pairs fresh;
        fresh.read_names();
        fresh.read_ages();
        fresh.sort1();
        cout << fresh;

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