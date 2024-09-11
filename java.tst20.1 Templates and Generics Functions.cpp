#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename T>
void printVector (const vector<T>& vec) {
    for (size_t i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
 // Function Templates/generics 
 // Define functions for different ytpes without having to rewrite the same 

 vector<string> cities = {"Newcastle", "Sunderland", "London"};
 vector<int> numbers = {1, 5, 10, 25, 50, 100};
 printVector(cities);
 printVector(numbers);
}


