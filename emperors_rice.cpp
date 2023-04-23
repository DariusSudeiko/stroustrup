#include "std_lib_facilities.h"

int main(){
int square;
double grains=1;
double sum = 0;
for (square = 1;grains <=1000; ++square){
    cout << "grains this time: " << grains << "\n";
    sum=sum+grains;
    grains *= 2;
    cout << "grains so far: " << sum << "\n";
}
}