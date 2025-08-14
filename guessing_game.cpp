#include <iostream>
#include <ctime>
using namespace std;

void gussing(int guess){
    cout << endl << "I'm thinking of a number between 1 and " << guess << "." << endl;
    cout << "Can you guess it?" << endl << endl;

    srand(time(NULL));

    int num = rand() % guess + 1;

    int given_num;
    int time_of_guess = 0;
    while(given_num != num){
        cout << "Enter your number: ";
        cin >> given_num;

        time_of_guess++;

        cout << "\n";
        if(given_num < num) {
            cout << "Too small!\nTry again.\n" << endl;

        } else if(given_num > num) {
            cout << "Too High!\nTry again.\n" << endl;

        } else if(given_num == num) {
            cout << "Correct! You guessde in " << time_of_guess << " tries." << endl;
            cout << "Thanks for playing.\n" << endl;

        }
    }
}

int main(){
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Easy'e' Medum'm' Hard'h'" << endl;
    cout << "selact d: ";
    
    char ch;
    cin >> ch;

    int g;
    bool h = true;
    
    if( ch == 'E' || ch == 'e'){
        g = 50;

    } else if( ch == 'M' || ch == 'm'){
        g = 100;

    } else if(ch == 'H' || ch == 'h'){
        g = 1000;

    } else {
        cout << "Invalid." << endl;
        h = false;
    }

    if(h){
        gussing(g);
    }

    return 0;
}


