#include "../std_lib_facilities.h"

class Money{
    double cents;
    double dollars;
    char currency;
public:
    Money (char currency, double cents):currency{currency}, cents{cents}{ }
    Money (char currency, double dollars, double cents):currency{currency}, dollars{dollars},cents{cents}{ }
    double get_cents() const {return cents;}
    double get_dollars() const {return dollars;}
    double get_full() const {return (dollars*100) + cents;}
    
};
ostream& operator<<(ostream& os, const Money& mon){
   return os << '$' << mon.get_full()/100 << endl;
};
int main(){
    Money cash{'$',12,45};
    cout << cash;
}