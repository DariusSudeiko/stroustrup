#include "std_lib_facilities.h"

// fibonaci numbers

int main(){
    vector<int>fib={1,1};
    int num=1;
    cout << fib[0] << "\n";
    for(int i=1;i<46;++i) // 46 is the biggest that can fit into an int
    {
        cout << fib[i] << "\n";
        num=fib[i]+fib[i-1];
        fib.push_back(num);
    }
}