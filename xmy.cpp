#include "xmy.hpp"
#include "../std_lib_facilities.h"

int foo;

void print_foo(){ 
    cout << foo << "\n";
}
void print(int i){ 
    cout << i << "\n";
}
void print(double i){ 
    cout << i << "\n";
}
void print (int i, int j){
    cout << i << " " << j << " \n";
}
void swap_v(int a,int b){
    int temp; temp = a; a=b; b=temp; // pass by variable
}
void swap_v(double a,double b){
    int temp; temp = a; a=b; b=temp; // pass by variable
}
void swap_r(int& a,int& b){
    int temp; temp = a; a=b; b=temp; // pass by refference
}
/*void swap_cr(const int& a,const int& b){ /// constant variables cannot be modified
    int temp; temp = a; a=b; b=temp;
}*/