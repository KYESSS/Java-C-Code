#include <iostream>

using namespace std;
// Iteration - for loops, while Loops, terminates when condition is met
// Recursion - Function that calls itself, terminates with base case condition is met 

//int factorial(int n) {
   // int result = 1;
    //while (n > 1) {
     //   result *= n;
     //   n -=1;
   // }
    //return result;

    int factorial(int n) {
        if (n <= 0) {
            return 1;
        }
        return n * factorial(n-1); //factorial (5) -> 5 * factorial(4) -> 5 * 4 * factorial(3)

}

int main() {
 // Factorial (denoted in math as !, ex. n!) is the product of all numbers from 1 to n 
 // ex. 5 factorial (5!) is equal to 5*4*3*2*1 = 120

 cout << "-5 factorial = " << factorial(-5) << endl; 
 cout << "3 factorial = " << factorial(3) << endl;
 cout << "5 factorial = " << factorial(5) << endl;
 cout << "10 factorial = " << factorial(10) << endl;

}



