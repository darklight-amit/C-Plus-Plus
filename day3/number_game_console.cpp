// Design a simple number game with the following features:

// The program first displays a multiplication table for a number entered by the user (use a for loop).

// Then, the program lets the user guess a secret number between 1 and 10 (use a while loop).

// After the game ends, ask the user if they want to play again (use a do...while loop).

#include <iostream>
#include <cstdlib>  // For rand() and srand()
using namespace std;


int main(){
    // Chooes the number for multiplication table

    int number;
    bool chooesAgain = true;
    char playAgain;
    do{
        playAgain = 'y';
        cout << "Chooes any valid number from 1-10: ";
        
        do {
            cin >> number;
            if (1<= number and number <= 10) {
                cout << "Great! it's a valid number \n";
                chooesAgain = false;
            }
            else
                cout << "oops!, wrong number, chooes again from 1-10: ";
                
        } while(chooesAgain);

        cout << "here is the table of number " << number << "\n"; 

        for (int i=1 ; i <= 10 ; i++){
            cout << number << " X " << i << " = " << number*i << "\n";
        }

        // coose random number from 1-10
        int randInt;
        cout << "guess any number between 1-10: ";
        cin >> randInt;
        int secretNum = rand() % 10 + 1;
        
        while(randInt != secretNum){
            cout << "oops! not the right guess, chooes again: ";
            cin >> randInt ;
        } 

        cout << "do you want to play the game again y/n: ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "thanks for plaing bye!";

}