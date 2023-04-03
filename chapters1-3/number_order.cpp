#include "std_lib_facilities.h"

int main()
{
    string array[3];
  
    cout << "please enter three integer values: ";
    cin >> array[0] >> array[1] >> array[2];
    for (int i = 0; i < 3; i++)
    {
        for (int j=i+1; j < 3; j++){

        if(array[i] > array[j]){

        string tmp = array[i];
        array [i] = array[j];
        array[j] = tmp;
        }
        }

    }
    for (int k = 0; k < 3; k++){
        cout << array[k] << " ";
    }
}


