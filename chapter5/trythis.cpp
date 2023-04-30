#include "std_lib_facilities.h" 

// learining logic
// learning errors

int main(){

        vector<double>temps;
        for(double temp; cin>>temp;)
            temps.push_back(temp);

        double sum = 0;
        double high_temp=-1000;
        double low_temp=1000;

        for (int x:temps)
        {
            if(x>high_temp)high_temp=x;
            if(x<low_temp)low_temp=x;
            sum += x;

        }
        
        cout << "high temperature: " << high_temp<< '\n';
        cout << "low temperature: " << low_temp<< '\n';
        cout << "average temperature: " << sum/temps.size() << '\n';
        
    
}
/*void error1(string s1, string s2);

int main(){
    string a="john",b="madden";
    error1(a,b);
}

void error1(string s1, string s2){
    throw runtime_error(s1+s2);
}
*/