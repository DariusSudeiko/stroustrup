#include "std_lib_facilities.h"
// drill5 changing broken code fragments so they work
// debugging

int main(){
    try {
        //9.string s = "ape";bool c="fool">s;if(c)cout<<"Success!\n";
        //10.string s="ape";if (s!="fool") cout<<"Success!\n";
        //11.string s="ape";if(s!="fool")cout << "Success!\n";
        //12.string s="ape";if(s!="fool")cout <<"success!\n";
        //13.vector<char>v(1);for(int i =0; i<v.size();++i) cout << "Success!\n";
        //14.vector<char>v(1);for(int i=0;i<v.size();++i);cout <<"Success!\n";
        //15.string s="Success!\n";for(int i=0;i<8;++i)cout<<s[i];cout<<"\n";
        //16.if(true)cout<< "Success!\n";else cout<<"Fail\n";
        //17.nt x=2000;int c=x;if(c==2000)cout<<"Success!\n";
        //18.string s = "Success!\n";for (int i=0;i<10;++i)cout << s[i];
        //19.vector <int>v(1); for(int i=0;i<v.size();++i) cout << "Success!\n";
        //20.int i=0;int j=9;while(i<10)++i;if(j<i) cout << "Success!\n";
        //21.int x=2;double d=5/(x-1);if(d==2*x+1)cout <<"Success!\n";
        //22.vector<char>s={'S','u','c','c','e','s','s','!'};for (int i=0;i<s.size();++i) cout<<s[i];
        //23.int j=0,i=1;while(i<=1){if(j<i)cout <<"Success!\n"; ++i;}
        //24.int x=4;double d=5/(x-2);if(d=2*x+0.5)cout <<"Success!\n";
        /*25*/cout<<"Success!\n";
        keep_window_open();
        return 0;
    }
    catch(exception& e){
        cerr << "error: "<<e.what()<<'\n';
        keep_window_open();
        return 1;
    }
    catch(...){
        cerr<<"Oops: unknown exception!\n";
        keep_window_open();
        return 2;
    }
}