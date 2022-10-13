//Fact of a given n
#include <iostream>

using namespace std;

int main() {
    int n, ans;
    cout << "Enter The Number Whose Factorial You would like to find" << endl;
    cin >> n;
    ans = 1;
      for (int i = n; i  > 1; i--) {
        ans = i * ans;
      }
      cout << "The answer is " << ans << endl;
    return 0;
}