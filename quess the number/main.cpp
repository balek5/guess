#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand((unsigned int) time(NULL));
    int number = (rand() % 10) + 1;
    int maxGuesses = 3;
    int guessCount = 0;

    int guess = 0;

    do {
        cout <<"Hadaj od (1-10):" ;
        cin >> guess;
        guessCount++;

        if (guess > number)
            cout << "Guess lower!" << endl;
        else if (guess < number)
            cout << "Guess higher!" << endl;
        else {
            cout << "You won!" << endl;
            break;
        }

        if(guessCount == maxGuesses) {
            cout << "no more guessses for you  " << number << endl;
            break;
        }
    }while(true);

    return 0;
}
