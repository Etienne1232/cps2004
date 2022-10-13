#include <iostream>

using namespace std;

int main() {
    int s1, s2, s3;
    cout << "Enter The Largest Side" << endl;
    cin >> s1;
    cout << "Enter The Second Side" << endl;
    cin >> s2;
    cout << "Enter The Third Side" << endl;
    cin >> s3;
    if(s2*s2 + s3*s3 == s1*s1) {
        cout << "The Triangle is Right Angled " << endl;
    }
    else {
        cout << "The Triangle is Not Right Angled " << endl;
    }
    return 0;
}
