#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printVector(const vector<string>& vec) { //cities =
     for (size_t i = 0; i < vec.size(); i++) {
        cout << vec [i] << " ";
     }
     cout << endl;
}


int main() {
 // Pass by value - generally used for primitive type (non class) ex) int, double, float, bool, char
 // Pass by reference - generally used for class types ex) string, vector
 // Pass by Const Reference - same as above except const, only for reading the parameter and not modifying

 vector<string> cities = {"Newcastle", "Sunderland", "London"};
 vector<string> fruits = {"Apple", "Banana", "Lemon", "Orange", "Strawberry"};
 printVector(cities);
 printVector(fruits);
}

