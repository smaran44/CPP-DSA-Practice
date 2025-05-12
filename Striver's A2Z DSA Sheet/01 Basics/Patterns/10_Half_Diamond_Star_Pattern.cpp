/*
Pattern 10: Half Diamond Star Pattern

Input: n = 4
Output:
*
**
***
****
***
**
*
*/

#include <iostream>
using namespace std;

void halfDiamondStarPattern(int n) {
    // Upper part of the half diamond
    for (int i = 1; i <= n; i++) {
        // Print stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the half diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows (n): ";
    cin >> n;
    halfDiamondStarPattern(n);
    return 0;
}
