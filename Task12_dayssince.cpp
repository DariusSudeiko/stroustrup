#include "../std_lib_facilities.h"

//Since the task is asking for representation , all that i changed is the output operator definitions

enum class Month{
    jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
};
enum class Day{
    sun=1,mon,tue,wed,thu,fri,sat
};
const vector<string> Day_tbl { "Sunday", "Monday", "Tuesday",
        "Wednesday", "Thursday", "Friday", "Saturday"
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

    void add_day(int n){d+=n;};
    bool leapyear(int y) const;
    void add_month(int n);
    void add_year(int n);
    Date next_workday(Date d);
    int week_of_year() const;
private:
    int y;
    Month m;
    int d;
};
    int Date::week_of_year() const { // helper function for check the week of the year
            if (leapyear(y) == false){
            switch (int(m)){
            case 1:
            return 31 / 7;
            case 2:
            return (31+28) / 7;
            case 3:
            return (31+28+31) / 7;
            case 4:
            return (31+28+31+30) / 7;
            case 5:
            return (31+28+31+30+31) / 7;
            case 6:
            return (31+28+31+30+31+30) / 7;
            case 7:
            return (31+28+31+30+31+30+31) / 7;
            case 8:
            return (31+28+31+30+31+30+31+31) / 7;
            case 9:
            return (31+28+31+30+31+30+31+31+30) / 7;
            case 10:
            return (31+28+31+30+31+30+31+31+30+31) / 7;
            case 11:
            return (31+28+31+30+31+30+31+31+30+31+30) / 7;
            case 12:
            return (31+28+31+30+31+30+31+31+30+31+30+31) / 7;
            default:
            throw runtime_error("bad month");
            }
            }
            else {
            switch (int(m)){
            case 1:
            return 31 / 7;
            case 2:
            return (31+29) / 7;
            case 3:
            return (31+29+31) / 7;
            case 4:
            return (31+29+31+30) / 7;
            case 5:
            return (31+29+31+30+31) / 7;
            case 6:
            return (31+29+31+30+31+30) / 7;
            case 7:
            return (31+29+31+30+31+30+31) / 7;
            case 8:
            return (31+29+31+30+31+30+31+31) / 7;
            case 9:
            return (31+29+31+30+31+30+31+31+30) / 7;
            case 10:
            return (31+29+31+30+31+30+31+31+30+31) / 7;
            case 11:
            return (31+29+31+30+31+30+31+31+30+31+30) / 7;
            case 12:
            return (31+29+31+30+31+30+31+31+30+31+30+31) / 7;
            default:
            throw runtime_error("bad month");
            }
            }
        };

    bool Date::leapyear(int y) const{ // Task 10 , implement check for leap year
        if(y % 4 == 0){
            return false;
        }
        else return true;
        };
        Date Date::next_workday(Date d)
    {
        Day weekday;

        do {
            d.add_day(1);
            weekday = Day(d.d);
        } while (weekday == Day::sat || weekday == Day::sun);

        return d;
    }

ostream& operator<<(ostream& os, const Date& d)
    {
    //return os << '(' << d.year() << ',' << int(d.month()) << ',' << d.day() << ')';
    
    return os << d.year()*365 + int(d.month()) * 30 +d.day(); // to save time , any sort of checking was ignored
    // including leap years and the fact that some months have 30 some have 31
    }
 Day operator++(Day& d)
    {
        d = (d == Day::sat) ? Day::sun : Day(int(d) + 1);

        return d;
    }

ostream& operator<<(ostream& os, const Day& d)
    {
        return os << Day_tbl[int(d)];
    }

int main(){
    try{
    Date d {1978, Month::jun, 25};
    // const Date cd {2001, Month::feb, 21};
    cout << d << endl; //"-" << cd.day() << "\n";
    d.add_day(1);
    cout << d << endl;
    cout << d.week_of_year() << endl;
    cout << d.next_workday(d) << endl;
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