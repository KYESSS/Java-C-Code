#include <iostream>

using namespace std;

int main () {
    //statis memory - stack memory (allocated at build/compile time)
    //compile time is when your program is converted from c++ into machine code. at tgis time there are checks for
    //dynamic memory - heap memory/free store (allocated at run time), needs to be cleaned up
    //heap is larger than stack and is used when you don't know how much memory you need ahead of time

    int capacity;
    cout << "How many tickets do you want to buy? ";
    cin >> capacity;

    //int lotterTickets [capacity] = {55, 32}
    int* lotteryTickets = new int[capacity];

    for (int i = 0; i < capacity; i++) {
        cout << "Enter a lottery number: ";
        // cin >> *(lotteryTickets + i) or
        cin >> lotteryTickets[i];
    }
    for (int i = 0; i < capacity; i++) {
        cout << lotteryTickets[i] << " ";
    }
    cout << endl;

    delete[] lotteryTickets;
    lotteryTickets = nullptr;
}