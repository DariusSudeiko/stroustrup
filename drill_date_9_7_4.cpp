#include "../std_lib_facilities.h"

enum class Month{
    jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
};

class Date {
public:
    //...
    Date(int y, Month m, int d) : y(y), m(m), d(d) {}
    int day() const {
        if (d<31 && d>0){
        return d;
        }
        else error (" days in a month are [1,31] ");
        return 1;
        }
    Month month() const {return m;}
    int year() const {return y;}

    void add_day(int n){
        d+=n;
    };
    void add_month(int n);
    void add_year(int n);
private:
    int y;
    Month m;
    int d;
};

ostream& operator<<(ostream& os, const Date& d)
    {
    return os << '(' << d.year() << ',' << int(d.month()) << ',' << d.day() << ')';
    }

int main(){
    try{
    Date d {1978, Month::jun, 25};
    // const Date cd {2001, Month::feb, 21};
    cout << d << endl; //"-" << cd.day() << "\n";
    d.add_day(1);
    cout << d << endl;
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