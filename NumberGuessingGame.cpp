#include <iostream>
#include <ctime>                   
using namespace std;

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int secretNumber = std::rand() % 100 + 1;

    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" <<endl;

    do {
        cout << "Enter your guess (between 1 and 100): ";
        cin >> userGuess;
        ++attempts;

        if (userGuess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > secretNumber) {
            cout << "Too high! Try again." <<endl;
        } else {
            cout << "Congratulations! You guessed the correct number (" << secretNumber << ") in " << attempts << " attempts." <<endl;
        }
    } while (userGuess != secretNumber);

    return 0;
}
