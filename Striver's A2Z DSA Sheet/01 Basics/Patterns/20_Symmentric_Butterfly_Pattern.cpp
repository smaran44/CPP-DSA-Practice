/*
Pattern 20: Symmetric-Butterfly Pattern

Input Format: N = 3
Result:
*    *
**  **
******
**  **
*    *

Input Format: N = 6
Result:
*          *
**        **
***      ***
****    ****
*****  *****
************
*****  *****
****    ****
***      ***
**        **
*          *
*/

#include <iostream>
using namespace std;

void symmetricButterflyPattern(int N) {
    int spaces = 2 * N - 2;

    // Upper half
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        spaces -= 2;
        cout << endl;
    }

    spaces = 2;

    // Lower half
    for (int i = N - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        spaces += 2;
        cout << endl;
    }
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    symmetricButterflyPattern(N);
    return 0;
}
