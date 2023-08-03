#ifndef LIBRARY_H_
#define LIBRARY_H_

namespace Library1{

enum class Genre{ // enum class for genre
    fiction, nonfiction, periodical, biography, children
}; 
enum class Month{
    jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
};

class Patron{
private:
    string name;
    int card_num;
    int owed_fees=0;
    bool debt=false;
public:
    Patron (string name, int card_num, int owed_fees) :
    name{name}, card_num(card_num), owed_fees(owed_fees) { }
    string const get_name();
    int const get_num();
    int const get_fees();
    bool get_debt();
    int add_fee(int);
    
};
bool owed_is(Patron);

class Book{
private:
    Genre genre;
    string ISBN;
    string title;
    string author;
    int copyright_date;
    bool checked_out=false;
public:
    Book (string ISBN,string title, string author, Genre genre, int copyright_date) :
    ISBN{ISBN},title{title},author{author},genre{genre},copyright_date{copyright_date} { }
    Genre get_genre() const;
    string get_ISBN() const ;
    string get_title() const;
    string get_author() const;
    int get_copyright_date() const;
    bool get_checked_out() const;

    void check_in();
    void check_out();

};



class Date {
private:
    int y;
    Month m;
    int d;
public:
    Date(int y, Month m, int d) : y(y), m(m), d(d) {}
    int const day() ;
    Month const month();
    int const year();

    void add_day(int);
    void add_month(int);
    void add_year(int );
};

struct Transaction {
        Book b;
        Patron p;
        Date d;
        Transaction(Book bb, Patron pp, Date dd)
            :b{bb}, p{pp}, d{dd} { }
    };

class Library{
private:
    vector<Book>books;
    vector<Patron>patrons;
    vector<Transaction>transactions;
public:
    void add_book(Book a);
    void add_patron(Patron a);
    void remove_book(Book book_to_remove);
};

ostream& operator<<(ostream& os, const Genre& genre);
ostream& operator<<(ostream& os, const Book& d);
bool operator==(const Book& a, const Book& b);
bool operator!=(const Book& a, const Book& b);

}

#endif /* LIBRARY_H_ */
