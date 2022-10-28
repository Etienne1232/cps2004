#include <iostream>
//+---+---+---+
//| O | | |
//+---+---+---+
//| | X | |
//+---+---+---+
//| | | |
//+---+---+---+
using namespace std;

int main() {
     string arr= "----------" ;

    for (int i = 0; i < 9; i=i+3) {
    cout <<"+ - - - + - - - + - - - +"<< endl;
    cout << " |   " << arr[i] << "   |   " << arr[i+1] << "   |   " << arr[i+2] << "   |" << endl;
    }
    cout << "+ - - - + - - - + - - - +" << endl;
    return 0;
}