#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Enter The Word" << endl;
    cin >> word;
    int times_featured[word.length()] = {NULL};
    char distinct_letters[word.length()] = {NULL};
    bool is_new = true;
    for (char i: word){
        for (int j = 0; j < sizeof(distinct_letters); j++) {
            if(distinct_letters[j] == i) {
                times_featured[j]++;
                is_new = false;
                break;
            }
            if (is_new){
                distinct_letters[j] = word[i];
                times_featured[j] = 1;
            }
            is_new = false;
            }
        }
    cout << distinct_letters[0] << times_featured[0] << distinct_letters[1] << times_featured[1] << endl;
    return 0;
    }
