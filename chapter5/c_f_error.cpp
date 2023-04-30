#include "std_lib_facilities.h"

// throwing errors converting temperature

    double ctof(double c)
    //c to f f=9/5*c+32
    {
        if(c<-273.15){
        throw runtime_error("entered temp is too low");
        }
        double f=9/5*c+32;
        return f;
    }
    double ftoc(double f)
    {
        if(f<-459.67){
        throw runtime_error("entered temp is too low");
        }
        double c=(f-32)/(9/5);
        return c;
    }

    int main(){
        cout << "1.celcius to farenheit or 2.farenheit to celcius? ";
        int choice;
        cin >>choice;
        switch(choice)
        {
        case 1:
        {double c = 0;
        cin >> c;
        double f=ctof(c);
        cout << f << '\n';
        break;
        }
        case 2:
        {double f=0;
        cin >> f;
        double c=ftoc(f);
        cout << c << '\n';
        break;
        }
        default:
        cout << "entered option doesnt exist ";
        }
}