#include <iostream>
#include <vector>

using namespace std;

int main () {
    int savings = 10000;
    int savings2 = 50000;
    int* savingsPtr = &savings;
    // savings Ptr = &savings2;
    *savingsPtr += 2000; //savings 12000

    int& savingsRef = savings; //rsavings, refSavings, savings_ref, savingsRef
    savingsRef = savings2; //savings = savings2, savings = 50000
    savingsRef += 2000;

    cout << savings << endl;
    cout << *savingsPtr << endl;
    cout << savingsRef << endl;
     }
