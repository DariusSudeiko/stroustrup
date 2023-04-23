#include "std_lib_facilities.h"

int main(){
    char letter;
    int i = 65;
    int j=97;
    while(i < 91){
        letter = i;
        cout << letter << "  " << i << "\n";
        ++i;
    }
    while(j < 123){
        letter = j;
        cout << letter << "  " << j << "\n";
        ++j;
    }
    /*for (int i=97; i < 123; ++i )
    {
        letter = i;
        cout << letter << "  " << i << "\n";
    }
    */
    return 0;
}