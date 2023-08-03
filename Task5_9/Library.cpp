    #include "../../std_lib_facilities.h"
    #include "Library.hpp"

namespace Library1{

    string const Patron :: get_name(){return name;}
    int const Patron::get_num(){return card_num;}
    int const Patron::get_fees(){
        if(owed_fees<0){ error("illogical fee"); return 1;} 
        else return owed_fees;}
    bool Patron::get_debt(){return debt;}
    int Patron::add_fee(int n){
        if (n>0){
        debt=true;
        return owed_fees+=n;
    }
    else return owed_fees;
    };
    bool owed_is(Patron n){
    if(n.get_debt()){cout << "Patron owes " << n.get_fees() << " fees";}
    return n.get_debt();
    };

    Genre Book::get_genre() const{return genre;}
    string Book::get_ISBN() const {return ISBN;}
    string Book::get_title() const {return title;}
    string Book::get_author() const {return author;}
    int Book::get_copyright_date() const {return copyright_date;}
    bool Book::get_checked_out() const {return checked_out;}

    void Book::check_in(){
        checked_out = true;
    };
    void Book::check_out(){
        checked_out = false;
    };



    int const Date::day() {
        if (d<31 && d>0){
        return d;
        }
        else error (" days in a month are [1,31] ");
        return 1;
        };

    Month const Date::month() {return m;}
    int const Date::year() {return y;}

    void Date::add_day(int n){
        d+=n;
    };
    void Date::add_month(int n){
        int(m)=int(m)+n;
    };
    void Date::add_year(int n){
        y+=n;
    };
    

    void Library::add_book(Book a){
        books.push_back(a);
    };
    void Library::add_patron(Patron a){
        patrons.push_back(a);
    };
    void Library::remove_book(Book book_to_remove) {
    books.erase(std::remove(books.begin(), books.end(), book_to_remove), books.end());
    };



    ostream& operator<<(ostream& os, const Genre& genre)
    {
    vector<string> genre_tbl = {
        "fiction", "nonfiction", "periodical", "biography", "children"
    };

    return os << genre_tbl[static_cast<int>(genre)];
    }

    ostream& operator<<(ostream& os, const Book& d)
    {
    vector<string> genre_tbl = {
        "fiction", "nonfiction", "periodical", "biography", "children"
    };

    return os << d.get_ISBN() << ",\n" << d.get_title() << ",\n" << d.get_author() << ",\n" 
              << genre_tbl[static_cast<int>(d.get_genre())] << "\n" << d.get_copyright_date();
    }

    bool operator==( const Book& a, const Book& b)
    {
    return a.get_ISBN() == b.get_ISBN();
    }

    bool operator!=( const Book& a, const Book& b)
    {
    return a.get_ISBN() != b.get_ISBN();
    }
    

}
    

