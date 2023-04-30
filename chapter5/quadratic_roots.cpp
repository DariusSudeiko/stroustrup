#include "std_lib_facilities.h"
//calculating quadratic functions
//throwing error if theres is a square root of a negative
void print (double k);

int main(){
    cout << "input a, b and c of the quadratic formula: \n";
    cout << "ax^2+bx+c=0 \n";
    double a,b,c;
    cin >> a >> b >> c;
    double discriminant;
    discriminant = (b*b)-(4*a*c);
    double x1, x2;
    x1=(-b+sqrt(discriminant))/2*a;
    print(discriminant);
    x2=(-b-sqrt(discriminant))/2*a;
    print(discriminant);
    cout << "x1: " << x1 << " x2: " << x2 << endl;
}
 void print (double k)
    {
        if(k<0){
        throw runtime_error("square root of negatives");
        }
    }