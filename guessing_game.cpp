#include <bits/stdc++.h>
using namespace std;
int main() {
    cout<<"Welcome to the Number Guessing Game!"<<endl;
    cout<<"Easy'e' Medum'm' Hard'h'"<<endl;
       cout<<"selact d: ";
    char a;
    cin>>a;
    int g;
    if(a == 'e' || a == 'E'){
        g = 50;
            cout<<endl<<"I'm thinking of a number between 1 and "<<g<<"."<<endl;
    cout<<"Can you guess it?"<<endl<<endl;

    srand(time(0));
     int n = rand() % g + 1;

       int s;
       int l=0;
       for(;s != n;) {
        cout<<"Enter your number: ";
        cin>>s;
        l++;

        cout<<endl;
        if(s < n) {
            cout<<" Too small!"<<endl<<" Try again."<<endl;
        } else if(s > n) {
            cout<<" Too High!"<<endl<<" Try again."<<endl;
        }else if(s == n){
            cout<<" Correct! You guessde in "<<l<<" tries."<<endl<<" Thanks for playing."<<endl;
        }
        cout<<endl;

       }
    } else if(a == 'm' || a == 'M') {
        g = 100;
            cout<<endl<<"I'm thinking of a number between 1 and "<<g<<"."<<endl;
    cout<<"Can you guess it?"<<endl<<endl;

    srand(time(0));
     int n = rand() % g + 1;

       int s;
       int l=0;
       for(;s != n;) {
        cout<<"Enter your number: ";
        cin>>s;
        l++;

        cout<<endl;
        if(s < n) {
            cout<<" Too small!"<<endl<<" Try again."<<endl;
        } else if(s > n) {
            cout<<" Too High!"<<endl<<" Try again."<<endl;
        }else if(s == n){
            cout<<" Correct! You guessde in "<<l<<" tries."<<endl<<" Thanks for playing."<<endl;
        }
        cout<<endl;

       }
    } else if(a == 'h' || a == 'H') {
        g = 1000;
            cout<<endl<<"I'm thinking of a number between 1 and "<<g<<"."<<endl;
    cout<<"Can you guess it?"<<endl<<endl;

    srand(time(0));
     int n = rand() % g + 1;

       int s;
       int l=0;
       for(;s != n;) {
        cout<<"Enter your number: ";
        cin>>s;
        l++;

        cout<<endl;
        if(s < n) {
            cout<<" Too small!"<<endl<<" Try again."<<endl;
        } else if(s > n) {
            cout<<" Too High!"<<endl<<" Try again."<<endl;
        }else if(s == n){
            cout<<" Correct! You guessde in "<<l<<" tries."<<endl<<" Thanks for playing."<<endl;
        }
        cout<<endl;

       }
    } else {
        cout<<"Error."<<endl;
    }
     

    return 0;
}