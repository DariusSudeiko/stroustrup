#include "../std_lib_facilities.h"

//obfuscation

struct X { // everything happens inside the struct
    void f(int x){ // void functions
        struct Y{ // functions local struct
            int f(){return 1;} // return something wrong if called
            int m; // local variable to X::Y
        };
    int m; // local variable
    m=x; // m gains value of x
    Y m2; // new variable m2 of type Y
    return f(m2.f());} // // Y::f() returns 1, the only thing it can return
int m; // global variable
void g(int m){
    if(m) /* if m != 0*/ f(m+2); // return 
    else{
    g(m+2);} // if m = 0 , we raise the code by 2
}
X(){} // redeclaration of X
void m3(){} // void function m3

void main(){
X a; // variable a of type X
a.f(2);} // the only thing it can return is 1
};
