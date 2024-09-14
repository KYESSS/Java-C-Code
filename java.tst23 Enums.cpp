#include <iostream>
#include <string>
#include <vector>
using namespace std;

//An enumeration (enum) is a special type that represents a group of named intergers values
//ex) Days of the week, list of email mailboxes, list of pokemon, error codes, etc

//Example Vending Machine

enum Snack {
    DARK_CHOCOLATE = 100,
    APPLE, 
    BANANA,
    KIWI,
    ORANGE, 
};

void addItem(vector<Snack>& items, int numberEntered) {
    switch(numberEntered) {
        case Snack::DARK_CHOCOLATE:
        cout << "Dark Chocolate Added" << endl;
        items.push_back(Snack::DARK_CHOCOLATE);
        break;
        case Snack::APPLE:
        cout << "Apple Added" << endl;
        items.push_back(Snack::APPLE);
        break;
        case Snack::BANANA:
        cout << "Banana Added" << endl;
        items.push_back(Snack::BANANA);
        break;
        case Snack::KIWI:
        cout << "Kiwi Added" << endl;
        items.push_back(Snack::KIWI);
        break;
        case Snack::ORANGE:
        cout << "Orange Added" << endl;
        items.push_back(Snack::ORANGE);
        break;
        default:
        cout << "Item unknown" << endl;
    }
}

int main () {
    Snack currentItem = Snack::DARK_CHOCOLATE;
    cout << "Current Item: " << currentItem << endl;

    vector<Snack> items;
    int numberEntered = DARK_CHOCOLATE;
    for (int i = 0; i < 3; i++) {
        cout << "Enter a number:";
        cin >> numberEntered;
        addItem(items, numberEntered);
    }
}

