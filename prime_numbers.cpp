#include "std_lib_facilities.h"

int main(){
    vector<double>primes={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    vector<double>list;
    double prime;
    int max;
    cin >> max;
    for (double i=1;i<=100;++i){
        for (double j=0;j<=primes.size()-1;++j){
        if (i/primes[j]==1){
        prime=i;
        list.push_back(prime);
        }
    }
    for (int k=1;k<=max;++k){
        if(primes[k]/primes[k-1]==1)
        prime=primes[k];
        primes.push_back(prime);
    }
}
    for(int j=0;j<list.size();++j)
    cout << list[j] << "\n";
    for(int j=0;j<primes.size();++j)
    cout << primes[j] << "\n";
}