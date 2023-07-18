
/*
	calculator08buggy.cpp

	Helpful comments removed.

	We have inserted 3 bugs that the compiler will catch and 3 that it won't.
*/

#include "../std_lib_facilities.h"
// defining class of inserted tokens
class Token {
public:
// defining three different constructors
//defining three variables for kind value and name
	char kind;
	double value;
	string name;
	Token(char ch) :kind(ch), value(0) { }
	Token(char ch, double val) :kind(ch), value(val) { }
    Token(char ch, string name) : kind(ch), name(name) { }
};
// defining the input stream , where each buffer will be saved
class Token_stream {
	bool full;
	Token buffer;
public:
// the token stream is built empty
	Token_stream() :full(0), buffer(0) { }
// get function that return a Token type variable????
	Token get();
	// defining a function that fills the buffer
	void unget(Token t) { buffer = t; full = true; }
//function that ignores char??
	void ignore(char);
};

const char let = '#'; // declaration token
const char quit = 'q';
const char print = ';';
const char number = '8';
const char name = 'a';
const int k = 1000;
const char sqrt_func = 's'; // Token for dealing with sqrt
const char pow_func = 'p';
const string declkey = "let";
const string exitkey = "exit";
const char help = 'h';

Token Token_stream::get()
{
	// declaring the get function from the Token_stream
	if (full) { full = false; return buffer; }
	char ch;
	cin >> ch;
	// all characters with which our calculator will deal with
	switch (ch) {
	case '(':
	case ')':
	case '+':
	case '-':
	case '*':
	case '/':
	case '%':
	case ';':
	case '=':
	case 'E':
	case '#':
	case 'a':
	case 's': // sqrt
	case 'p': // power of
	case ',':
	case 'h':
		return Token(ch);
		break;
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	// filling the buffer with the value from the token stream
	{	cin.unget();
	double val;
	cin >> val;
	// returning the previously entered number and the new one
	return Token(number, val);
	}
	break;
	default:
	// is the entered token a char?
		if (isalpha(ch) || ch=='_') {
			string s;
			// if so then we add it to our string
			s += ch;
			// while char is being entered and the char is a char or a string , the string equals char
			while (cin.get(ch) && (isalpha(ch) || isdigit(ch) || ch == '_')) s+= ch;
			cin.unget();// fill the buffer with the entered char
			if (s == declkey ) return Token(let); // return let
			if (s == "quit" || "q") return Token(quit); // return name when you want to quit
			if (s == "print") return Token(print);//*!
			if (s == "number") return Token(number);//*!
			if (s == "k") error("constant cannot be changed ");
			if (s == "name" || '_') return Token(name);//*!
			if (s == exitkey) return Token(quit);
			if (s == "help" || "h") return Token(help);
			return Token(name, s);
		}
		if (isspace(ch)) {
                    if (ch == '\n') return Token{print};
                    break;
                }
                error("Bad Token");
		error("Bad token");
		return 1;
	}
}
// defining ignore function
void Token_stream::ignore(char c)
{
	// if buffer is full and 
	if (full && c == buffer.kind) {
		full = false;
		return;
	}
	full = false;

	char ch;
	while (cin >> ch)
		if (ch == c) return;
}
// defining the type Variable
// our variables has two types
class Variable {
	public:
	string name;
	double value;
	bool check;
	Variable(string n, double v) :name(n), value(v) { }
};
// Vector with type Variable variables 
vector<Variable> names;
// getting value from string
class Symbol_table {
	public:
	vector<Variable>var_table;
	double get_value(string s);
	void set_value(string s, double d);
	bool is_declared(string s);
	double declaration();

};
double Symbol_table :: get_value(string s)
{
	for (int i = 0; i < names.size(); ++i)
	// parsing the list with the name, checking if it matches what was entered
		if (names[i].name == s)
			return names[i].value;	
	// show error otherwise	
	error("get: undefined name ", s);
	return 0;
}
// setting value from string and a double
void Symbol_table ::set_value(string s, double d)
{
	for (int i = 0; i < names.size(); ++i)
		{if (names[i].name == s) {
			names[i].value = d;
			return;
		}
		if (names[i].name == "k"){
			cout << "k is a predefined constant\n";
		return;
		}
		}
		names.push_back(Variable(s, d));

}

bool Symbol_table::is_declared(string s)
{// parsing if we have a match for a name
	for (int i = 0; i < names.size(); ++i)
		if (names[i].name == s) return true;
	return false;
}
// where all tokens are stored
Token_stream ts;
// function that defines expression
Symbol_table Sym; // Task 4 create a class symbol table
double expression();
// function primary
double primary()
{
	// assigning the value to Token from the stream
	Token t = ts.get();
	switch (t.kind) {

	case pow_func: // update it with a switch()
	{
		t = ts.get(); // Get the next token after pow_func
		if (t.kind != '(') error("'(' expected after pow");

		double a = expression(); // Evaluate the base expression

		t = ts.get(); // Get the next token after the base expression
		if (t.kind != ',') error("',' expected in pow function");

		double b = expression(); // Evaluate the exponent expression

		t = ts.get(); // Get the closing ')' token
		if (t.kind != ')') error("')' expected in pow function");
		return pow(a, b);
	}
	case sqrt_func:
	{
    double d = primary();
    if (d < 0)
        error("sqrt() argument must be non-negative");
    return sqrt(d);
	}
		break;
	case '(':
	{	double d = expression();
	t = ts.get();
	if(t.kind == ',')return t.kind;
	if (t.kind != ')') error("'(' expected");
	}
		break;
	case '-':
		return -primary(); //deals with negative numbers
	case number:
		return t.value;
	//this case is to find out what token this is
	case name:
		return Sym.get_value(t.name);
	default:
		error("primary expected");
		return 1;
	}
	return 0;
}

double term()
{
	double left = primary();// leftest number
	while (true) {
		Token t = ts.get();// get from token stream
		switch (t.kind) { 
		case '*':
			left *= primary();
			break;
		case '/':
		{	double d = primary();
		if (d == 0) error("divide by zero");// error handling
		left /= d;
		break;
		}
		default:
			ts.unget(t);// buffer is full
			return left;// return the left 
		}
	}
}

double expression()
{
	double left = term(); // left becomes value
	while (true) {
		Token t = ts.get(); // get from token stream
		switch (t.kind) {
		case '+':
			left += term();
			break;
		case '-':
			left -= term();
			break;
		default:
			ts.unget(t);// buffer is full
			return left;
		}
	}
}

double Symbol_table::declaration()
{
    Token t = ts.get();
    if (t.kind != 'a' )
        error("name expected in declaration");
    string name = t.name;
    Token t2 = ts.get();
    if (t2.kind != '=')
    {
        ts.unget(t2); // Revert token if it's not an assignment
        return expression();
    }
    double d = expression();
    Sym.set_value(name, d); // Update or add the variable
    return d;
}

double statement()
{
	Token t = ts.get();
	switch (t.kind) {
	case let:
		return Sym.declaration(); // if the command was let , then we just leave the declaration
	default:
		ts.unget(t);//fill the buffer 
		return expression(); // return the value
	}
}

void clean_up_mess()
{// stop counting ignore = , clean up mess
	ts.ignore(print);
}

const string prompt = "> ";
const string result = "= ";

void help_list(){
	cout << "think harder" << "\n";
};

void calculate()
// main function
{
	// always try
	while (true) try {
		cout << prompt; // >
		Token t = ts.get(); // get token from token stream
		while (t.kind == print) t = ts.get(); // if the symbol is ; then print the result
		if (t.kind == help) {
			help_list(); 
			t = ts.get();
			continue;
		}
		if (t.kind == quit) return; // exit
		ts.unget(t); // the buffer is filled up
		cout << result << statement() << endl; // return expression or the declaration
	}
	catch (runtime_error& e) {
		cerr << e.what() << endl;
		clean_up_mess();
	}
}

int main()

try {
	calculate();
	return 0;
}
// generic exception handling most problems
catch (exception& e) {
	cerr << "exception: " << e.what() << endl;
	char c;
	while (cin >> c && c != ';');
	return 1;
}
catch (...) {
	cerr << "exception\n";
	char c;
	while (cin >> c && c != ';');
	return 2;
}