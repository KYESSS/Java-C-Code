#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename T, typename U>
bool vectorSearch(const vector<T>& vec, U element) {
    for (size_t i = 0; i < vec.size(); i++) {
        if (vec[i] == element) {
        return true; //early exit
    }
    }
    return false;
}

template <typename T, typename U>
bool vectorSearchR(const vector<T>& vec, U element, int index = 0) {
    if (index == vec.size()) {
        return false;
    }
    return vec[index] == element || vectorSearchR(vec, element, index+1);
    if (vec[index] == element){
        return true;
    }
    return vectorSearchR(vec, element, index+1);
}

int main() {
 vector<string> cities = {"Newcastle", "Sunderland", "London", "York", "Liverpool", "Sunderland"};
 vector<int> numbers = {5, 2, 1, 10, -3, 60, 3, 60, 99, 102, -60, 1, 1};

 cout << "# of times London appears in cities vector: "  << vectorSearchR(cities, "London") << endl; // 2
 cout << "# of times Coventry: " << vectorSearchR(cities, "Coventry") << endl; // 0
 cout << "# of times 10 appears in numbers vector: " << vectorSearchR(numbers, 10) << endl; // 3
 cout << "75 is in the numbers vector: " << vectorSearchR(numbers, 75) << endl; // 0
}

