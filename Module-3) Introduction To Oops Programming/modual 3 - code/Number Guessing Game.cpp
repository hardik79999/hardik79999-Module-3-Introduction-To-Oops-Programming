#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int guess, number;
    
    // Generate a random number between 1 and 100
    srand(time(0));
    number = rand() % 100 + 1;

    cout << "Guess a number between 1 and 100:\n";

    // Loop until the user guesses correctly
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > number) {
            cout << "Too high! Try again.\n";
        } else if (guess < number) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed it right.\n";
            break;
        }
    }

    return 0;
}


