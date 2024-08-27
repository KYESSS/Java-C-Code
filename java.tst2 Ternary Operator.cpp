//KYESSSS 

#include <iostream>
using namespace std;

int main(){
    char letterGrade;
    int grade = 75;

letterGrade = (grade >= 90) ? 'A' : (grade >=80) ? 'B' : (grade >=70) ? 'C' : (grade>=60) ? 'D' : 'F';

cout  << "Final Grade: " << letterGrade << endl;

}