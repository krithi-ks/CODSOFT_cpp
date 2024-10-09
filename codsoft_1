// C++ PROGRAM - CODSOFT
// TASK 1 - NUMBER GUESSING GAME

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (void)
{
    int randNum;
    // Seeding random number generator
    srand(time(NULL));
    // To generate a random number starts from 0 to 20
    randNum = (rand() % 21);

    int guess = 0;

    cout << "\nNUMBER GUESSING GAME STARTS NOW!" << endl;
    cout << "Dear User,Total Chance=10, ALL THE BEST!" << "\nGuess any number starts from 0 to 20" << endl;

    // Loop for 10 chances
    int i = 1, result;
    while (i <= 10) {
        cout << "\nGuess " << i << ": ";
        cin >> guess;

        // Check for correctness
        if (guess == randNum) {
            cout << "Congrats, You are correct!";
            result = 1;
            break;
        }
        else if (guess < randNum)
            cout << "Too Low!";
        else
            cout << "Too High!";
        
        i++;
    }

    // Result of the game
    if (result == 1)
        cout << "\nThe number is " << randNum << ".";
    else 
        cout << "\nOops! You lost.\nPlease Try Again!";
}
