#include "../std_lib_facilities.h"

void print(string label, vector<int>& list)
{
    for(int i = 0; i<list.size();++i)
    {   
        list[i]-=1;
        cout << label << " " << list[i] << "\n";
    }
};
int main(){
    try {
    string s = "====";
    vector<int>list;
    for(int i = 0; i<10; ++i){
        list.push_back(i);
    }
    print(s,list);
    cout << list.at(4);
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