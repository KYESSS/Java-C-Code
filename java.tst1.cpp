//KYESSSS 

#include <iostream>
using namespace std;

int main(){
    int grade = 94;

    if (grade >= 90) cout << "You get an A" << endl;
    else if (80 <= grade && grade < 90) cout <<"You get a B" << endl;
    else if (70 <= grade && grade < 80) cout <<"You get a C" << endl;
    else if (60 <= grade && grade < 70) cout <<"You get a D" << endl;
    else cout << "You get an F" << endl;
}