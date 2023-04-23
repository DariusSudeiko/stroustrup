#include "std_lib_facilities.h"

int main() {
    vector<int> collect;
    cout << "Enter members of vector: \n";
    int num;
    while (cin >> num) {
        collect.push_back(num);
    }
    
    // Find the mode
    int mode = 0;
    int max_count = 0;
    for (int i = 0; i < collect.size(); ++i) {
        int count = 0;
        for (int j = 0; j < collect.size(); ++j) {
            if (collect[j] == collect[i]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            mode = collect[i];
        }
    }
    
    cout << "The mode is: " << mode << endl;
    
    return 0;
}