#include "../std_lib_facilities.h"

int maxv(vector<int>nums){
    int biggest=0;
    for(int i=0;i<nums.size();++i){
        if(nums[i]>biggest){
            biggest=nums[i];
        }
    }
    return biggest;
    }

int main(){
    try {
    vector<int>nums;
    for(int i=0;i<10;++i){
        nums.push_back(i+1);
    }
    int biggest = maxv(nums);
    cout<< biggest;
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