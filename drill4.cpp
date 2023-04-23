#include "std_lib_facilities.h"


int main(){
    vector <double> numbers;
    double number;
    double smallest = 999999;
    double biggest=0;
    int cycle = 0;
    int sum = 0;
    string unit;
    string smallest_unit = "new";
    string biggest_unit;
    while(cin >> number >> unit)
    {  
        if (unit == "m")
        {number=number * 100;}
        else if (unit == "cm")
        {}
        else if (unit == "in")
        {number = number*2.54;}
        else if (unit == "ft")
        {number = number*12*2.54;}
        else
        {cout << "i dont know this measurement \n";
        return 0;}

       numbers.push_back(number);
       sum += number;

       for (int i=0;i<numbers.size();++i)
       if(numbers[i] > biggest)
       {biggest = numbers[i];
       cout << "largest so far " << biggest <<" cm\n";
       biggest_unit = unit;}
       else if (numbers[i]<smallest && numbers[i] < biggest )
       {
        cout << "smallest so far " << numbers[i] <<  " cm\n";
        smallest = numbers[i];
        smallest_unit = unit;
        }
       else 
       {cout << "";}
    
        if (smallest_unit == "new"){
        cout << "results are converted to cm \n";
        cout << biggest << " " << "the entered unit was: " << biggest_unit << " ";}
        else {
        string line(50, '-');
        cout << line << "\n";
        cout << "results are converted in cm \n";
        cout << "so far we had " << cycle << " numbers\n";

       cout << smallest << " " << "the entered unit was: " << smallest_unit << " "
        << biggest << " " << "the entered unit was: " << biggest_unit << " ";}
        ++cycle;
        cout << " sum of numbers: " << sum << "cm ";
}
sort(numbers);
for (int j = 0; j < numbers.size(); j++)
cout << numbers[j] << "\n";

}




/*int main(){
double a,b;
cout << "enter two values: \n";
while(cin >> a >> b){
    if (a-b <= 0.01) 
    cout << "numbers are almost equal \n" << "to exit press | followed by 'enter' \n";
    else if (b-a <= 0.01) 
    cout << "numbers are almost equal \n" << "to exit press | followed by 'enter' \n"; 
    else if (a>b){
        cout << "the smaller value is:  " << b << "\n"
        << "the bigger value is: " << a << "\n"
        << "to exit press | followed by 'enter' \n";
        }
    else if(a<b)
    {
        cout << "the smaller value is:  " << a << "\n"
        << "the bigger value is: " << b << "\n"
        << "to exit press | followed by 'enter' \n";
        }
    else if ( a == b)
    {
        cout << "the numbers are equal \n" << "to exit press | followed by 'enter' \n"; 
    }
    else if (a == '|' || b == '|')
    exit;
}
return 0;
}
*/