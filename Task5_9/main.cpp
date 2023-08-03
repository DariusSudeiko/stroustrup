#include "../../std_lib_facilities.h"
#include "Library.hpp"

using namespace Library1;

int main(){
    try{
    Book john {"112-2123-3123-A", "John walker ", "myriam hone", Genre::fiction, 1997};
    Book free_fall {"232a", "Free fall ", "samantha jobes", Genre::children, 1991};
    Book dog_time {"356a", "Dog Time ", "peter dinklage", Genre::fiction, 1873};

    cout << "Is john available?\n";
    cout << (john.get_checked_out() ? "YES" : "NO") << '\n';

    john.check_in();

    cout << "Is john available?\n";
    cout << (john.get_checked_out() ? "YES" : "NO") << '\n';

    cout << john << endl;
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
