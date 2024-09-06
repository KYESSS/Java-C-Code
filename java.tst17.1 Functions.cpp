#include <iostream>
#include <string>

using namespace std;

string multiply(char c, int repetitions) {
    string result = "";
    for (int i = 0; i < repetitions; i++) {
        result += c;
    }
    return result;
}

int main() {
 //functions allow us to define a reusabe block of code for a specific task/workflow
 //A function neeeds to be called (invoked) to run the block of code
 //A function can take in parameters/arguments, and return a value 

 cout << 'A' * 5 << endl; //'A' -> 65, 65*2 = 325, "AAAAA"
 cout << multiply('A', 5) << endl;
 cout << multiply('$', 3) << endl;

}

