#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
     An execption is an error/problem that arises during the execution of a program.
     Sometimes this will cause the program to stop running. We can catch and handle exceptions
     so that our program can continue running even after encountering the issue.

     try: rune code inside this in case of errors
     throw: throws an exception when a rpoblem is detected 
     catch: catch an exception thrown from try block and rune code inside this block
*/

void setRoomSlot(vector<int>& roomSlots, int index, int numPeople) {
       if (index >= roomSlots.size() || index < 0) {
        throw "setRoomSlot - Index out of range.";
       }
       else if (roomSlots[index] !=0) {
        throw "setRoomSlot - Room is already booked";
       }
       roomSlots[index] = numPeople;
}

int main(){
    //5 rooms, 0 occupants in each 
    vector<int> roomSlots = {1, 2, 3, 4, 0};
    try {
        setRoomSlot(roomSlots, 10, 15);
    }
    catch (const char* errorMessage) {
        cerr << errorMessage << endl;
    }
    catch (exception e) {  //e = error, err
        cerr << e.what() << endl;
    }
    catch (...) {
        cerr << "Exception Caught" << endl;
    }
    cout << "DONE~!" << endl;
}
