#include "std_lib_facilities.h"

// compute mean and median temperatures

int main(){

    vector<double>temps;
    for (double temp; cin >> temp;)
    temps.push_back(temp);

    // compute mean temperature;

    double sum = 0;
    for (int x : temps)sum+=x;;
    cout << "Average temperature: " << sum/temps.size() << '\n';

    // compute median temperature
    cout << temps.size()/2;
    sort(temps);
    cout << "median temperature: " << temps[temps.size()/2] << '\n';
    
    }