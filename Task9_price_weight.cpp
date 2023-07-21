#include "../std_lib_facilities.h"

int compute(vector<double>price,vector<double>weight){
int index=0;
for(int i=0;i<price.size();++i){
    index+=price[i]*weight[i];
}
return index;
}
int main(){
try {vector<double>price(5);
vector<double>weight(5);
for(int i=0;i<price.size();++i){
    price[i]=i+1;
}
for(int i=0;i<weight.size();++i){
    weight[i]=i+2;
}

int index=compute(price, weight);
for(int i=0;i<price.size();++i){
    cout << price[i] << " ";
}
cout << endl;
for(int i=0;i<weight.size();++i){
    cout << weight[i]<< " ";
}
cout << endl;
cout << index;
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