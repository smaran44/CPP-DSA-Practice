/*
Pattern 17: Alpha Diamond Pattern

Input: n = 4
Output:
   A
  ABA
 ABCBA
ABCDCBA
*/

#include <iostream>
using namespace std;

void alphaDiamondPattern(int n) {
    // Upper part of the diamond
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print increasing letters
        for (int j = 1; j <= i; j++) {
            cout << char('A' + j - 1);
        }
        // Print decreasing letters
        for (int j = i - 1; j >= 1; j--) {
            cout << char('A' + j - 1);
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows (n): ";
    cin >> n;
    alphaDiamondPattern(n);
    return 0;
}
