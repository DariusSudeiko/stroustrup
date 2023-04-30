#include "std_lib_facilities.h"

// throwing errors converting temperature

    double ctok(double c)
    {
        if(c<-273.15){
        throw runtime_error("entered temp is too low");
        }
        double k=c+273.15;
        return k;
    }
    double ktoc(double k)
    {
        if(k<0){
        throw runtime_error("entered temp is too low");
        }
        double c=k+273.15;
        return c;
    }

    int main(){
        cout << "1.kelvin to celsius or 2.celsius to kelvin ?;";
        int choice;
        cin >>choice;
        switch(choice)
        {
        case 1:
        {double k = 0;
        cin >> k;
        double c=ktoc(k);
        cout << c << '\n';
        break;
        }
        case 2:
        {double c=0;
        cin >> c;
        double k=ctok(c);
        cout << k << '\n';
        break;
        }
        default:
        cout << "entered option doesnt exist ";
        }
}
