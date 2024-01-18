#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;

    do {
        // Get user's guess
        cout << "Enter your guess (between 1 and 100): ";
        cin >> userGuess;

        // Increment the attempts count
        attempts++;

        // Provide feedback on the user's guess
        if (userGuess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number in "
                 << attempts << " attempts." << endl;
        }

    } while (userGuess != secretNumber);

    return 0;
}
