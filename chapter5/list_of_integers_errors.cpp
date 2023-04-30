#include "std_lib_facilities.h"
// write into a vector
// write out sum of requested integers
// throw error if requested integers exceed the ammount of integers
void error(int i,int j);

int main(){
    cout << "enter the numbers you want to sum: \n";
    double how_many;
    cin >> how_many;
    cout << "enter numbers followed by any symbol to stop: \n";
    vector<double>number_list;
    double number;
    while(cin>>number)
    {
        number_list.push_back(number);
    }
    double k = number_list.size();
    error(how_many,k);
    double sum=0;
    for(int i=0;i<how_many;++i)
    {
        sum+=number_list[i];
    }
    cout << sum;

}
void error(double i,double j){
    if(i>j){
    throw runtime_error("array size");
    }
}