#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    //break - Terminate the loop
    //continue - skip the current ireration of the loop

    //paint colors
    vector<string> colors = { "Blue", "Red", "Green", "White", "Black"};
    string targetcolor = "Red";
    bool found = false;

    for (size_t i=0; i < colors.size ();i++) {
        cout << i << " " << colors [i] << endl;
        if (colors [i] == targetcolor) {
            found = true;
        }
    }
    cout << targetcolor << (found? " found!" : " not found!") << endl;
}
