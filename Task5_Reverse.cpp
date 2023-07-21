#include "../std_lib_facilities.h"

//Passing by number
vector<int> rev_num (vector<int> v){
    reverse(v.begin(), v.end());
    return v;
}
int main()
{
 
    try{
    vector<int> a = { 1,2,3,4,5,6,7,8 };
    for (int i = 0; i < a.size(); i++)
    {cout << a[i] << " ";}
    cout << "\n";
    vector<int>newly=rev_num(a);
    for (int i = 0; i < newly.size(); i++)
    {cout << newly[i] << " ";}
    cout << "\n";
 
    return 0;
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
//Passing by refference

/*void rev_num (vector<int>& v){
    reverse(v.begin(), v.end());
}
int main()
{
 

    vector<int> a = { 1,2,3,4,5,6,7,8 };
    for (int i = 0; i < a.size(); i++)
    {cout << a[i] << " ";}
    cout << "\n";
    rev_num(a);
    for (int i = 0; i < a.size(); i++)
    {cout << a[i] << " ";}
    cout << "\n";
 
    return 0;
}*/