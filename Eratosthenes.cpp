#include "std_lib_facilities.h"

int main(){
    cout << "how many primes would you like to see? \n";
    cout << "how long is the search? \n";
    int limit;
    cin >> limit;
    vector<int>limits;
    int ammount;
    cin >> ammount;
    bool arr[ammount];
    bool flag;


    for(int i=0;i<ammount;++i)
        arr[i] = true;
    

    for(int i=2;i<ammount;++i)
    {
        for (int j=i*i;j<ammount;j+=i)
        {
            arr[j-1]=false;
        }
    }
    for (int i=2;i<ammount;++i)
    {
        if(arr[i-1] == true)
            limits.push_back(i);
    }
    for (int i=0;i<limit;++i)
    cout << limits[i] << "\n";
    cout << "\n";
    return 0;
}