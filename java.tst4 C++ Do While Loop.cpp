#include <iostream>
#include <string>
using namespace std;

int main() {
    //while loops are used to repear a block of code
    //an unspecified number of times until a condition is met
    //do while loop executes code first, and then checks the condition
    //do while loop guarantees at least one iteration

    string guessWord = "Hey";
    string inputword;
    int guessTurn = 1;

    do {
        cout << "Guess #" << guessTurn++ << endl;
        getline(cin, inputword);
    } while (inputword != guessWord && !inputword.empty());
    
    if (inputword.empty()) {
        cout << "Quit Game!" << endl;
    }
    else {
        cout << "Correct Guess!"  << endl;
        }
}
