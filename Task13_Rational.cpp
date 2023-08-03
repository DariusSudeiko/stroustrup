#include "../std_lib_facilities.h"

// Task 13 Design and implement a rational number class , Rational
// equations , assignment , math operations

class Rational{
    int numerator;
    int denominator;
public:
    Rational(int numerator, int denominator)
    : numerator{numerator}, denominator{denominator}{ }
    int get_num() const {return numerator;}
    int get_den() const {return denominator;}
    double get_full() const {return double(numerator) / double(denominator);}
};

ostream& operator<<(ostream& os, const Rational& rat){
    return os << rat.get_full();
};
double operator+(const Rational& rat1, const Rational& rat2){
    return rat1.get_full() + rat2.get_full();
};
double operator-(const Rational& rat1, const Rational& rat2){
    return rat1.get_full() - rat2.get_full();
};
double operator*(const Rational& rat1, const Rational& rat2){
    return rat1.get_full() * rat2.get_full();
};
double operator/(const Rational& rat1, const Rational& rat2){
    return rat1.get_full() / rat2.get_full();
};
bool operator==(const Rational& rat1, const Rational& rat2){
    return rat1.get_full() == rat2.get_full();
};
bool operator!=(const Rational& rat1, const Rational& rat2){
    return rat1.get_full() != rat2.get_full();
};


int main(){
    Rational rat{5,6};
    Rational rat1{5,6};
    int a;
    cout << rat<< endl;
    cout << rat+rat1 << endl;
    cout << rat-rat1 << endl;
    cout << rat*rat1 << endl;
    cout << rat/rat1 << endl;
    if (rat==rat1 ? a = 0 : a = 1);
    cout << a << endl;
    if (rat!=rat1 ? a = 0 : a = 1);
    cout << a << endl;
};

// Using rational we can put fractions in a computer