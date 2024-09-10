#include <iostream>
#include <string>
#include <vector>

using namespace std;

/* 
      2). Write a function vectorCount that take in a vector of elements and a target  element
          The function returns an int indicating how many times the target element appears in the vector
*/

template <typename T, typename U>
int vectorCount(const vector<T>& vec, U element) {
    int total = 0;
    for (size_t i = 0; i < vec.size(); i++) {
        // if (vec[i] == element) { // true = 1, false = 0 
        //    total += 1;
        // }
        total += vec[i] == element;
    }
    return total;
}

int main() {
 vector<string> cities = {"Newcastle", "Sunderland", "London", "York", "Liverpool", "Sunderland"};
 vector<int> numbers = {5, 2, 1, 10, -3, 60, 3, 60, 99, 102, -60, 1, 1};

 cout << "# of times Sunderland appears in cities vector: "  << vectorCount(cities, "Sunderland") << endl; // 2
 cout << "# of times Coventry: " << vectorCount(cities, "Coventry") << endl; // 0
 cout << "# of times 1 appears in numbers vector: " << vectorCount(numbers, 1) << endl; // 3
 cout << "75 is in the numbers vector: " << vectorCount(numbers, 75) << endl; // 0
}

