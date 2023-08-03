#include "../std_lib_facilities.h"

// simple Date
// guarantee initialization with constructor
// provide some notational convenience
struct Date{
    int y,m,d;
    Date(int y,int m, int d):y(y),m(m),d(d){
        if (y<2200 && y>1800 && m<13 && m>0 && d<31 && d>0){
        y=y;
        m=m;
        d=d;
    }
    else error("bad date");
    };
    void add_day(int n){
        if(d+n<31&&d+n>0)d+=n;
        else error(" days in a month are [1,31] ");
    };
};
ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.y << ',' << d.m << ',' << d.d << ')';
}

int main(){
    try{
    Date a = {1978,06,25};
    a.add_day(1);
    cout << a;
    return 0;
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
