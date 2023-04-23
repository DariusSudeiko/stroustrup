#include "std_lib_facilities.h"

// no more than 7 guesses

int main(){
    cout << "Enter a number between 1 and 100 \n";
    cout << "y for yes , n for no \n";
    char answer;
    cout << "Is you number less than or equal to 50 \n";
    cin >> answer;
    if (answer == 'y'){ // less than or equal to 50
        cout << "is answer divisiible by 2 ";
        cin >>answer;
        if(answer=='y')
            cout << "is the answer divisible by 4? ";
            cin >>answer;
            if(answer=='y')
                cout<< "is answer divisible by 6?";
                cin >> answer;
                    if(answer=='y')
                        cout << "is it divisible by 10?";
                        cin >> answer;
                            if (answer=='y')
                                cout << "is this your number?: 60";
                                else if (answer=='n') { 
                                    cout << "does your number start with a 7?";
                                        if (answer == 'n')
                                            cout << "96";
                                                else if (answer =='y')cout << "72";};
            

        
        
    }
    else if(answer == 'n'){//more than 50

    } 

}