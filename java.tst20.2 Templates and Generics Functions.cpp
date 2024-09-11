#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename T, typename U> 
size_t totalSize(const vector<T> vec1, const vector<U> vec2) {
    return vec1.size() + vec2.size ();
}

int main() {
 // Function Templates/generics 
 // Define functions for different ytpes without having to rewrite the same 

 vector<string> cities = {"Newcastle", "Sunderland", "London"};
 vector<int> numbers = {1, 5, 10, 25, 50, 100};
 cout << "total size: " << totalSize(cities, numbers) << endl;
cout << "total size: " << totalSize(numbers, numbers) << endl;
}


