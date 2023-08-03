#include "../std_lib_facilities.h"

struct Date{
    int y;
    int m;
    int d;
};

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.y << ',' << d.m << ',' << d.d << ')';
}


// helper functions


void init_day(Date& dd, int y, int m, int d)
{
    //check that (y,m,d) is a valid date
    //if it is, use it to initialize dd
    if (y<2200 && y>1800 && m<13 && m>0 && d<31 && d>0){
        dd.y=y;
        dd.m=m;
        dd.d=d;
    }
    else error("bad date");
}

void add_day(Date& dd, int n)
{
    //increase dd by n days
    if (dd.d+n > 31 || dd.d+n < 1)error(" days in a month are [1,31] ");
    else dd.d+=n;
}
void f()
{
    Date today;
    init_day(today,1978,06,25);
    cout << today << endl;;
    Date tomorrow = today;
    add_day(tomorrow, 1);
    cout << tomorrow << endl;
}
int main(){
    try{
        f();
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