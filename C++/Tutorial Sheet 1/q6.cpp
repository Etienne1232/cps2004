#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    int points = 0;
    cout << "Enter The Word" << endl;
    cin >> word;
    for (char i : word)
        switch (i) {
            case 'e':
            case 'a':
            case 'i':
            case 'o':
            case 'n':
            case 'r':
            case 't':
            case 'l':
            case 's':
            case 'u': points++; break;

            case 'd':
            case 'g': points = points + 2; break;

            case 'b':
            case 'c':
            case 'm':
            case 'p': points = points + 3; break;

            case 'f':
            case 'h':
            case 'v':
            case 'w':
            case 'y': points = points + 4; break;

            case 'k': points = points + 5; break;

            case 'j':
            case 'x': points = points + 8; break;

            case 'q':
            case 'z': points = points + 10; break;

            default: cout << "Enter a valid letter-only string"; break;
        }

    cout << "Points: " << points << endl;
    return 0;
}
