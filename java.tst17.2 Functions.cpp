#include <iostream>
#include <string>

using namespace std;

void Swap (int& a, int& b) { //local scope
     int temp = a;
     a = b;
     a = temp;
}

int main() {
 //functions allow us to define a reusabe block of code for a specific task/workflow
 //A function neeeds to be called (invoked) to run the block of code
 //A function can take in parameters/arguments, and return a value 

 int a = 10;
 int b = 20;
 cout << "a:" << a << " b:" << b << endl;
 swap (a, b);
 cout << "a:" << a << " b:" << b << endl; 
}

