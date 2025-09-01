#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    srand(time(0));  
    int number = rand() % 100 + 1;  
    int guess;

    cout << "Guess the number between 1 and 100\n";
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == number) {
            cout << "You got it! The number was " << number << endl;
            break; 
        } 
        else if (guess > number) {
            cout << "Too high, try again.\n";
        } 
        else {
            cout << "Too low, try again.\n";
        }
    }

    return 0;
}
