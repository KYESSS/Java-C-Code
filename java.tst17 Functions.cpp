#include <iostream>
#include <string>

using namespace std;

void greet(const string& city = "Unknown") { //city = "Sunderland"
    cout << "Hello " << city << endl;
}

int main() {
 //functions allow us to define a reusabe block of code for a specific task/workflow
 //A function neeeds to be called (invoked) to run the block of code
 //A function can take in parameters/arguments, and return a value 

 greet("Newcastle");
 greet("York");
 greet("Sunderland");

}

