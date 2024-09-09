#include <iostream>
#include <string>
#include <vector>

using namespace std;

int multiply(int a, int b) {
    return a*b;
}
int multiply(int a, int b, int c) {
    return a*b;
}

int multiply(int numbers[], int n) {
    int result = 1;
for (int i = 0; i < n; i++) {
    result *= numbers[i];
}
return result;
}

double multiply(double a, double b) {
    return a*b;
}

string multiply (char c, int n) {
    string result = "";
    for (int i = 0; i < n; i++) {
        result += c;
    }
    return result;
}

string multiply(int n, char c) {
   return multiply(c, n);
}
int main() {
 // Function Overloading = Polymorphic function (Poly = Many, Morph = Forms)
 // Function Overloading allows us to create multiple functions with the same name
 // No two function of the same name can have the same exact signature 

int numbers[] = {1, 2, 3, 4, 5};
 cout << "5*3 = " << multiply(5, 3) << endl;
 cout << "5*3*(-10) = " << multiply(5, 3, -10) << endl;
 cout << "{1, 2, 3, 4, 5} = " << multiply(numbers, 5) << endl;
 cout << "5.5*5.5 = " << multiply(5.5, 5.5) << endl;
 cout << "$'*3 = " << multiply('$', 3) << endl;
 cout << "3*'$' = " << multiply (3, '$') << endl;
 
}

