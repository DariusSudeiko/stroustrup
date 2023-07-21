#include "../std_lib_facilities.h"

void print_until_s(const vector<string>& v, const string& quit)
    // §8.5.2 - improved by passing const-ref
{
    for (const string& s : v) {
        if (s == quit) return;
        cout << s << '\n';
    }
}

void print_until_ss(const vector<string>& v, const string& quit)
    // print until second occurance of quit
{
    int count = 0;
    for (const string& s : v) {
        if (s == quit) ++count;
        if (count > 1) return;
        cout << s << '\n';
    }
}

int main()
try {
    vector<string> vs { "bottle", "phone", "calculator", "pen", "lego", "book",
            "lightbulb", "lego", "sharpener", "remote" };

    print_until_s(vs, "pen"); cout << '\n';

    print_until_ss(vs, "lego"); cout << '\n';

    print_until_s(vs, "charger"); cout << '\n';
}
catch(std::exception& e) {
    std::cerr << "Exception: " << e.what() << '\n';
    return 1;
}
catch(...) {
    std::cerr << "Unknown exception\n";
    return 2;
}