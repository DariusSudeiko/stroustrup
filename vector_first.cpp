#include "std_lib_facilities.h"

// In this program we fill a vector with words and then print out them 
// if a word is disliked we print BLEEP

int main(){
    vector <string> words;
    string disliked = {"leja"};
    for (string word;cin >> word;){ // input separated by whitespace
    words.push_back(word); // this command adds words to the end of the vector
    
}
cout << "\n\n";
sort(words); // this function sorts strings
    for (int i=0;i<words.size();++i)
        if (i==0 || words[i-1]!=words[i]) // if this is the first word OR the previous word is not the same
            if(words[i] == disliked)
            cout << "BLEEP \n";
            else  
            cout << words[i] << "\n";
}