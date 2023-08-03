#include "../std_lib_facilities.h"

enum class Month{
    jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
};

// simple Date (use Month type)
class Year{
    static const int min = 1800;
    static const int max = 2200;
public:
    class Invalid{};
    Year(int x) : y{x}{if(x<min || max<=x)throw Invalid{};}
    int year(){return y;}
private:
    int y;
};


class Date{
public:
    Date(int y, Month m, int d):y(y),m(m),d(d){};
    void add_day(int n){
        d+=n;
    };
    int year() const{return y;}
    Month month() const {return m;}
    int day() const {return d;}
    //
private:
    int y;
    Month m;
    int d; //day
};

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.year() << ',' << int(d.month()) << ',' << d.day() << ')';
}

int main(){
    try{
    Date dx3{1998,Month::mar,30};
    cout << dx3;
    dx3.add_day(1);
    cout << dx3 << "\n";
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