#include "../std_lib_facilities.h"
struct answers { 
    int biggest=-9999;
    int smallest=9999;
    int median = 0;
    int mean = 0;
    };
    
answers maxv(vector<int>nums){
    answers myanswers;
    // calculate biggest
    for(int i=0;i<nums.size();++i){
        if(nums[i]>myanswers.biggest){
            myanswers.biggest=nums[i];
        }
    }
    // calculate smallest
    for(int i=0;i<nums.size();++i){
        if(nums[i]<myanswers.smallest){
            myanswers.smallest=nums[i];
        }
    }
    // calculate mean
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
    sum += nums[i];
    myanswers.mean = sum/nums.size();
    }

    //calculate median
    sort(nums.begin(),nums.end());
    if (nums.size() % 2 != 0) 
    myanswers.median = nums.size()/2;
    else if (nums.size() % 2 == 0) 
    myanswers.median = (nums.size()-1/2 + nums.size()/2)/2;
    

    return myanswers;
    }

    

int main(){
    try {
    vector<int>nums;
    for(int i=0;i<11;++i){
        nums.push_back(i+1);
    }
    answers newanswers = maxv(nums);
    cout << newanswers.biggest << newanswers.smallest << newanswers.mean<< newanswers.median;
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