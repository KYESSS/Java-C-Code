#include <iostream>
using namespace std;

int main () {
    //statis memory - stack memory (allocated at build/compile time)
    //dynamic memory - heap memory/free store (allocated at run time), needs to be cleaned up
    //heap is larger than stack and is used when you don't know how much memory you need ahead of time

    int savings = 10000; //created on the stack 
    cout << &savings << " " << savings << endl;

    int* savingsPtr = new int(50000); //created on the heap with new keyword
    cout << &savingsPtr << endl;
    cout << *savingsPtr << " " << *savingsPtr << endl;

    delete savingsPtr;
    //dangling pointer
    savingsPtr = nullptr;
}