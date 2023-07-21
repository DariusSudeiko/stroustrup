#include "../std_lib_facilities.h"

namespace X {
    int var;
    void print(){
        cout << var << "\n";
    }
};
namespace Y {
    int var;
    void print(){
        cout << var << "\n";
    }
};
namespace Z {
    int var;
    void print(){
        cout << var << "\n";
    }
};

int main(){
    try {
    X::var = 7;
    X::print();    //Print X's var
    using namespace Y;
    var = 9;
    print();
    {   using Z::var;
        using Z::print;
        var = 11;
        print();
    }
        print();    //print Y's var
        X::print();     //print X's var
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