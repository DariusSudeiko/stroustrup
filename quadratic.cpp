#include "std_lib_facilities.h"

int main(){
    cout << "input a, b and c of the quadratic formula: \n";
    cout << "ax^2+bx+c=0 \n";
    double a,b,c;
    cin >> a >> b >> c;
    double discriminant;
    discriminant = (b*b)-(4*a*c);
    double x1, x2;
    x1=(-b+sqrt(discriminant))/2*a;
    x2=(-b-sqrt(discriminant))/2*a;
    cout << "x1: " << x1 << " x2: " << x2 << endl;
}