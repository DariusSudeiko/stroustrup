#include "std_lib_facilities.h"

int main(){
    vector<double>two_cities;
    cout << "enter distances between two cities: \n";
    for(double distance; cin >> distance;)
    two_cities.push_back(distance);
    double sum = 0;
    for(double x : two_cities)sum+=x; // for(x=0;x<two.cities.size();++x)
    sort(two_cities);
    double mean = sum / (two_cities.size() - 1); // mean distance

    cout << "sum of all distances: " << sum << "\n";
    cout << "first is " << two_cities[0] << "\n";
    cout << "last is " << two_cities[two_cities.size() - 1 ] << "\n"; // we start counting from zero , thats why -1
    cout << "mean distance is: " << mean << "\n";
}
