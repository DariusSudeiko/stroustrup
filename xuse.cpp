#include "xmy.hpp"
#include <iostream>

int main(){
    try{
    {char cc;std::cin >>cc;}
    foo = 7;
    print_foo();
    print(99);
    int x=7;
    int y=9;
    swap_r(x,y);
    //swap_r(7,9);
    print(x,y);
    const int cx=7;
    const int cy=9;
    //swap_r(cx,cy);
    //swap_r(7.7,9.9);
    print(cx,cy);
    double dx = 7.7;
    double dy = 9.9;
    //swap_r(dx,dy);
    //swap_r(7.7,9.9);
    print(dx,dy);
    }
    catch(std::exception& e) {
    std::cerr << "Exception: " << e.what() << '\n';
    return 1;
    }
    catch(...) {
    std::cerr << "Unknown exception\n";
    return 2;
    }

    return 0;
}