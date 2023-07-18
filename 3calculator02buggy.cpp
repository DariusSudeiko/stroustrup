
//
// This is example code from Chapter 6.7 "Trying the second version" of
// "Software - Principles and Practice using C++" by Bjarne Stroustrup
//

/*
    This file is known as calculator02buggy.cpp

    I have inserted 5 errors that should cause this not to compile
    I have inserted 3 logic errors that should cause the program to give wrong results

    First try to find an remove the bugs without looking in the book.
    If that gets tedious, compare the code to that in the book (or posted source code)

    Happy hunting!

*/

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------
//bug fixed.  replaced lass with class
class Token{
public:
    char kind;        // what kind of token
    double value;     // for numbers: a value 
    Token(char ch)    // make a Token from a char
        :kind(ch), value(0) { }
    Token(char ch, double val)     // make a Token from a char and a double
        :kind(ch), value(val) { }
};

//------------------------------------------------------------------------------

class Token_stream {
public:
    Token_stream();   // make a Token_stream that reads from cin
    Token get();      // get a Token (get() is defined elsewhere)
    void putback(Token t);    // put a Token back
private:
    bool full;        // is there a Token in the buffer?
    Token buffer;     // here is where we keep a Token put back using putback()
};

//------------------------------------------------------------------------------

// The constructor just sets full to indicate that the buffer is empty:
Token_stream::Token_stream()
    :full(false), buffer(0)    // no Token in buffer
{
}

//------------------------------------------------------------------------------

// The putback() member function puts its argument back into the Token_stream's buffer:
void Token_stream::putback(Token t)
{
    if (full) error("putback() into a full buffer");
    buffer = t;       // copy t to buffer
    full = true;      // buffer is now full
}

//------------------------------------------------------------------------------

Token Token_stream::get()
{
    if (full) {       // do we already have a Token ready?
        // remove token from buffer
        full = false;
        return buffer;
    }

    char ch;
    cin >> ch;    // note that >> skips whitespace (space, newline, tab, etc.)

    switch (ch) {
    case '=':    // for "print"
    case 'x':    // for "quit"
    case '{': case '}': case '(': case ')': case '+': case '-': case '*': case '/':
    case '!':
        return Token(ch);
        break;        // let each character represent itself
    case '.':
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':    //added case 8
    {
        cin.putback(ch);         // put digit back into the input stream
        double val;
        cin >> val;              // read a floating-point number
        return Token('8', val);
        break;   // let '8' represent "a number"
    }
    default:
        error("Bad token");
        return 0;
        break;
    }
}

//------------------------------------------------------------------------------

Token_stream ts;        // provides get() and putback() 

//------------------------------------------------------------------------------

double expression();    // declaration so that primary() can call expression()

//------------------------------------------------------------------------------

double factorial(); // declaration 

// deal with numbers and parentheses
double primary()
{
    Token t = ts.get();
    switch (t.kind) {

    

    case '{' :    // handle '{' expression '}'
    {
        double s = expression();
        t = ts.get();
        if (t.kind != '}') error("'}' expected");  
            return s;
            break;
    }
    
    case '(':    // handle '(' expression ')'
    {
        double d = expression();
        t = ts.get();
        if (t.kind != ')') error("')' expected");  //put closing double quote
            return d;
            break;
    }
    case '8':            // we use '8' to represent a number
        return t.value;
        break;  // return the number's value
    default:
        error("primary expected");
        return 0;
        break;
    }
}

//------------------------------------------------------------------------------

// deal with *, /, and %
double term()
{    //double left = primary();
    double left = factorial();
    Token t = ts.get();        // get the next token from token stream

    while (true) {
        switch (t.kind) {
        case '*':
            //left *= primary();
            left *= factorial();
            t = ts.get();
            break;
        case '/':
        {
            //double d = primary();
            double d = factorial();
            if (d == 0) error("divide by zero");
            left /= d;
            t = ts.get();
            break;
        }
        default:
            ts.putback(t);     // put t back into the token stream
            return left;
        }
    }
}

//------------------------------------------------------------------------------

// deal with + and -
double expression()
{
    double left = term();      // read and evaluate a Term
    Token t = ts.get();        // get the next token from token stream

    while (true) {
        switch (t.kind) {
        case '+':
            left += term();    // evaluate Term and add
            t = ts.get();
            break;
        case '-':
            left -= term();    // evaluate Term and subtract
            t = ts.get();
            break;
        default:
            ts.putback(t);     // put t back into the token stream
            return left;       // finally: no more + or -: return the answer
        }
    }
}

double factorial()
{
    double left = primary();
    Token t = ts.get();        // get the next token from token stream

    while(true) {
        switch (t.kind) {
        case '!':
            {
                int n = left; // convert to int
                int fac = 1;  // 0!=1
                while (n>1) {
                  fac *= n;
                  n--;  // 1*n*(n-1)*.. *3*2
                }
                if (left < 0) {
                  left = -fac;  // we want to handle the case -5!
                } else {
                  left = fac;
                }                
                t = ts.get();
                break;
            }
        default:
            ts.putback(t);     // put t back into the token stream
            return left;
        }
    }
}

//------------------------------------------------------------------------------

int main()
try
{
    cout << "Welcome to our simple calculator \n" << "PLease enter expression using floating-point numbers.\n"; 
    cout << "this calculator can do +-*/! \n";
    cout << "num+sign+num, = to print, x to quit \n";
    double val = 0;  //added variable declaration
    while (cin) {
        Token t = ts.get();

        if (t.kind == 'x') return 0; // 'q' for quit
        if (t.kind == '=')        // ';' for "print now"
            cout << "=" << val << '\n';
        else {
            ts.putback(t);
            val = expression();
        }

    }
    keep_window_open();
}
catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}
catch (...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}

//------------------------------------------------------------------------------