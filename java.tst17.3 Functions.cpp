#include <iostream>
#include <string>
#include <vector>

using namespace std;

string makeUpperCase(string name) {
    for (size_t i = 0; i < name.size(); i++) {
        name[i] = toupper(name[i]); //toUpper
    }
    cout << "Inside makeUpperCase: " << name << endl;
    return name; 
}


int main() {
 //functions allow us to define a reusabe block of code for a specific task/workflow
 //A function neeeds to be called (invoked) to run the block of code
 //A function can take in parameters/arguments, and return a value 

 string name = "Kyesss"; //i want to change this to "KYE"
 string nameUpper = makeUpperCase(name);
 cout << "Inside main: " << name << endl;
 cout << "Inside main: " << nameUpper << endl;
}

