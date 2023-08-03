#include "../std_lib_facilities.h"

//simple Date (control access)
class Date{
private:
    int y, m, d;
public:
    Date(int y, int m, int d):y(y),m(m),d(d){
        if (y<2200 && y>1800 && m<13 && m>0 && d<31 && d>0){
        y=y;
        m=m;
        d=d;
    }
    else error("bad date");
    };
    void add_day(int n){
        if(d+n<32 || d+n>0)d+=n;
        else error(" days in a month are [1,31] ");
    };
    int month(){return m;}
    int day() {return d;}
    int year() {return y;}
};
ostream& operator<<(ostream& os, Date& d)
{
    return os << '(' << d.year() << ',' << d.month() << ',' << d.day() << ')';
}
int main(){
    try{
    Date birthday{1978,06,25};
    cout << birthday << '\n';
    birthday.add_day(1);
    cout << birthday << '\n';
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