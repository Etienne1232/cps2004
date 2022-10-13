#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter The Number of Days Worked" << endl;
    cin >> n;
    cout <<"You have earnt EUR" << pow(2,n)-1 << endl;
    return 0;
}