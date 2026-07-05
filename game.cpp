#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));          // Start the random number generator

    int secret = rand() % 100 + 1;   // Number from 1 to 100
    int guess;

    cout << "=== Guess the Number Game ===\n";

    do {
        cout << "Enter your guess (1-100): ";
        cin >> guess;

        if (guess > secret) {
            cout << "Too high!\n";
        }
        else if (guess < secret) {
            cout << "Too low!\n";
        }
        else {
            cout << "🎉 Congratulations! You guessed the number!\n";
        }

    } while (guess != secret);

    return 0;
}
