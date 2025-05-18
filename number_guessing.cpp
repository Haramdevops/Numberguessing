#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Initialize random speed
    int secretNumber = rand() % 100 + 1; // Generate a number between 1-100
    int guess;

    cout << "Guess the number (between 1 and 100): ";

    while (true) {
        cin >> guess;

        if (guess == secretNumber) {
            cout << "🎉 You guessed it right! The number was " << secretNumber << endl;
            break;
        } else if (guess < secretNumber) {
            cout << "🔼 Try a higher number!" << endl;
        } else {
            cout << "🔽 Try a lower number!" << endl;
        }
    }

    return 0;
}