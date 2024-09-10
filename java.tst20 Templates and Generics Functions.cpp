#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename T> // T = type

void Swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
 // Function Templates/generics 
 // Define functions for different ytpes without having to rewrite the same 

 int a = 5;
 int b = 10;
 cout << "a:" << a << " b:" << b << endl;
 Swap(a, b);
 cout << "a:" << a << " b:" << b << endl;

 string s1 = "apple";
 string s2 = "orange";

 cout << "s1: " << s1 << " s2: " << s2 << endl;
 Swap(s1, s2);
 cout << "s1: " << s1 << " s2: " << s2 << endl;
}


