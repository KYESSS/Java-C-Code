#include <iostream>
#include <string>
#include <vector>

using namespace std;

/* 
      1). Write a function vectorSearch that take in a vector of elements and a target
          element the function returns true if the element is in the vector and false otherwise 
*/

template <typename T, typename U>
bool vectorSearch(const vector<T>& vec, U element) {
    for (size_t i = 0; i < vec.size(); i++) {
        if (vec[i] == element) {
            return true; // early exit
        }
    }
    return false;
}

int main() {
 vector<string> cities = {"Newcastle", "Sunderland", "London", "York", "Liverpool" };
 vector<int> numbers = {5, 2, 1, 10, -3, 60, 3, 60, 99, 102, -60, 1, 1};

 cout << "London is in the cities vector: "  << vectorSearch(cities, "London") << endl; // true
 cout << "Coventry is in the cities vector: " << vectorSearch(cities, "Coventry") << endl; // false
 cout << "1 is in the numbers vector: " << vectorSearch(numbers, true) << endl; // true
 cout << "75 is in the numbers vector: " << vectorSearch(numbers, 75) << endl; // false






}

