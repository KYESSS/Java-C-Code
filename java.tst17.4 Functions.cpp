#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printVector(const vector<string>& cities) { //cities =
     for (size_t i = 0; i < cities.size(); i++) {
        cout << cities [i] << " ";
     }
     cout << endl;
}


int main() {
 //functions allow us to define a reusabe block of code for a specific task/workflow
 //A function neeeds to be called (invoked) to run the block of code
 //A function can take in parameters/arguments, and return a value 

 vector<string> cities = {"Newcastle", "Sunderland", "London"};
 printVector(cities);
}

