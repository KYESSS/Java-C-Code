#include <iostream>

using namespace std;

int main() {
    int savings = 10000;
    const int savings2 = 30000; // do not touch

    int* const savingsPtr = &savings; // const pointer to an int
    // savingsPtr = &savings2;

    //these two are the same 
    const int* savingsPtr2 = &savings2; //pointer to an int that is const
    int const* savingsPtr3 = &savings2;  //point to a const int
    //*savingsPtr2 += 1800;
    //*savingsPtr3 += 1800;

    cout << savings << endl;
    cout << savings2 << endl;
}