#include "std_lib_facilities.h"

int main() {
    vector<string> collect;
    cout << "Enter members of vector: \n";
    cout << "ctrl+D to exit \n";
    string num;
    while (cin >> num) {
        collect.push_back(num);
    }
    
    // Find the mode
    string mode;
    string min , max;
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
    for (int i = 1; i < collect.size();++i)
    {
    if(collect[i]<collect[i-1])
        min =collect[i];
    else if (collect[i]>collect[i-1])
        max =collect[i];
    }
    cout << "The mode is: " << mode << endl;
    cout << "min: " << min << "\n";
    cout << "max: " << max << "\n";
    
    return 0;
}
