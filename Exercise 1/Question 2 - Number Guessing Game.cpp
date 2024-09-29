#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int numberToGuess = rand() % 10 + 1;
    int guess, attempts = 0;

    do {
        cout << "Guess a number between 1 and 10: ";
        cin >> guess;
        attempts++;

        if (guess > numberToGuess) {
            cout << "Smaller" << endl;
        } else if (guess < numberToGuess) {
            cout << "Greater than" << endl;
        } else {
            cout << "Congratulations! You've guessed it in " << attempts << " tries." << endl;
            break;
        }
    } while (true);

    return 0;
}