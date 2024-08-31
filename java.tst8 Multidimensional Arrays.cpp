#include <iostream> 
#include <string>
#include <vector>

using namespace std;

int main() {
    //Nested Arrays (Arrays containing Arrays)
    //2D Arrays = Matrix
    string currencies [5][3] = { {"USA", "USD", "Dollar"},
                                 {"Canada", "CAD", "Dollar"},
                                 {"UK", "GBP", "Pound"},
                                 {"Spain", "EUR", "Euro"},
                                 {"France", "EUR", "Euro"}
                               };
                               
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cout << currencies [i][j] << " ";
        }
        cout << endl;
    }
}