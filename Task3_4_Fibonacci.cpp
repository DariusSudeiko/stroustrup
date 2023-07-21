#include "../std_lib_facilities.h"

void fibonacci(int x, int y,vector<int>& v, int n){
    v[0]=x;
    v[1]=y;
    for(int i=2;i<n;++i){
        v[i]=v[i-1]+v[i-2];
    }
};
void print(string label, vector<int> list)
{
    
    for(int i = 0; i<list.size();++i)
    {   
        cout << i+1 << label << " " << list[i] << "\n";
    }
};
int main(){
    try{
    string s = "====";
    int x=1;
    int y=2;
    int n = 50;
    vector<int>v(n);
    fibonacci(x,y,v,n);
    print(s,v);
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