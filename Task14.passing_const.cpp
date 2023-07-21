#include "../std_lib_facilities.h"

void number (const int a){
    cout << a*2 << "\n";
};
    int main(){

    try {
        const int a=3;
        number(a);

    }
    catch(std::exception& e) {
    std::cerr << "Exception: " << e.what() << '\n';
    return 1;
    }
    catch(...) {
    std::cerr << "Unknown exception\n";
    return 2;
    }
    }