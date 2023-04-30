#include "std_lib_facilities.h"

//game of guessing numbers and their correct places

int main(){
    cout << "What is your name? ";
    string name;
    cin >> name;
    cout << "Hello " << name << "\n";
    cout << "The gamme is called Bulls and Cows. \n";
    cout << "If you get a number correctly in its correct place it is a bull. \n";
    cout << "If you get a number correctly , but not in its correct place it is a cow. \n";
    srand(time(0));
    vector<int>correct;
    for(int i=0;i<4;++i){
        int cor = rand() % 10;
        correct.push_back(cor);
    }
    int guess;
    cout << "enter your four digit guess: ";
    while(cin >> guess){
    if (999>=guess||guess>=10000){
    cout << "enter a four digit number larger than 1000, but smaller than 10000: \n";
    }
    else
    {
        vector<int>guesses;
        int num1=guess/1000;
        guesses.push_back(num1);
        int num2=(guess%1000)/100;
        guesses.push_back(num2);
        int num3=(guess%100)/10;
        guesses.push_back(num3);
        int num4=guess%10;
        guesses.push_back(num4);
        int sum=0;
        for(int i=0;i<4;++i){
        if(correct[i]==guesses[i]){
            sum +=1;
        }
        }
        int cows=0;
        
        switch(sum){
            case 0:
            cout << "no bulls ";
            if(guesses[0]==correct[1]|| guesses[0]==correct[2] || guesses[0]==correct[3]){
                cows++;
            }
            if(guesses[1]==correct[0]|| guesses[1]==correct[2] || guesses[1]==correct[3]){
                cows++;
            }
            if(guesses[2]==correct[0]|| guesses[2]==correct[1] || guesses[2]==correct[3]){
                cows++;
            }
            if(guesses[3]==correct[0]|| guesses[3]==correct[1] || guesses[3]==correct[2]){
                cows++;
            }
            cout << cows << " cows";
            break;
            case 1:
            cout << "one bull ";
            if(guesses[0]==correct[0]){
                if(guesses[1]==correct[2]|| guesses[1]==correct[3] || guesses[2]==correct[3]){
                cows++;
            }
            }
            else if(guesses[1]==correct[1]){
                if(guesses[0]==correct[2]|| guesses[0]==correct[3] || guesses[2]==correct[3]){
                cows++;
            }
            }
            else if(guesses[2]==correct[2]){
                if(guesses[0]==correct[1]|| guesses[0]==correct[3] || guesses[1]==correct[3]){
                cows++;
            }
            }
            else if(guesses[3]==correct[3]){
                if(guesses[0]==correct[1]|| guesses[0]==correct[2] || guesses[1]==correct[2]){
                cows++;
            }
            }
            cout << cows << " cows";
            break;
            case 2:
            cout << "two bulls ";
            if(guesses[0]==correct[0]&&guesses[1]==correct[1]){
                if(guesses[2]==correct[3]&&guesses[2]==correct[3]){
                cows=cows+2;
                }
                else if(guesses[2]==correct[3]||guesses[2]==correct[3]){
                    cows++;
                }
            }
            else if(guesses[0]==correct[0]&&guesses[2]==correct[2]){
                if(guesses[1]==correct[3]&&guesses[3]==correct[1]){
                cows=cows+2;
                }
                else if(guesses[1]==correct[3]||guesses[3]==correct[1])
                {
                    cows++;
                }
            }
            else if(guesses[0]==correct[0]&&guesses[3]==correct[3]){
                if(guesses[1]==correct[2]&&guesses[2]==correct[1]){
                cows=cows+2;
                }
                else if(guesses[1]==correct[2]||guesses[2]==correct[1]){
                    cows++;
                }
            }
            else if(guesses[1]==correct[1]&&guesses[2]==correct[2]){
                if(guesses[0]==correct[3]&&correct[3]==correct[0]){
                cows=cows+2;
                }
                else if (guesses[0]==correct[3]||correct[3]==correct[0]){
                    cows++;
                }
            }
            else if(guesses[1]==correct[1]&&guesses[3]==correct[3]){
                if(guesses[0]==correct[2]&& guesses[2]==correct[0]){
                cows=cows+2;
                }
                else if (guesses[0]==correct[2]|| guesses[2]==correct[0]){
                    cows++;
                }
            }

            else if(guesses[2]==correct[2]&&guesses[3]==correct[3]){
                if(guesses[0]==correct[1]&&guesses[1]==correct[0]){
                cows=cows+2;
                }
                else if(guesses[0]==correct[1]||guesses[1]==correct[0]){
                    cows++;
                }
            }
               
            cout << cows << " cows";

            break;
            case 3:
            cout << "three bulls";
            break;
            case 4:
            cout << "four bulls! congratulations! \n";
            return 0;
            break;
            default:
            cout << "something went wrong";
            break;
            }
            
        }
    }
    }




