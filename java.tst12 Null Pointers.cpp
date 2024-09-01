#include <iostream>

using namespace std;

int main () {
    int a = 10, b = 15, c = 20; //a, b, and c are int

    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    cout << "c:" << c << endl;

    //int *aPtr, bPtr, cPtr; //aPtr = pointer to an int; bPtr and cPtr are ints
    int *aPtr, *bPtr, *cPtr; //aPtr, bPtr, cPtr are pointers to int
    aPtr = bPtr = cPtr = &a;

    cout << "aPtr:" << aPtr << " *aPtr:" << *aPtr << endl;
    cout << "bPtr:" << bPtr << " *bPtr:" << *bPtr << endl;
    cout << "cPtr:" << cPtr << " *cPtr:" << *cPtr << endl;
//A segementation fault occurs when a program attempts to access a memory location
//that it is not permitted to access resulting in a crash.
    int *dPtr, *ePtr;
    dPtr = ePtr = nullptr; //C++ 11, NULL, 0 
  

// int* Ptr
// int *Ptr
// int * Ptr
     }
