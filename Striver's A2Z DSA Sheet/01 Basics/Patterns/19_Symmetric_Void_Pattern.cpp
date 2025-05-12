/*
Pattern 19: Hollow Diamond Star Pattern

Input: N = 3
Output:
******
**  **
*    *
*    *
**  **
******

Input: N = 6
Output:
************
*****  *****
****    ****
***      ***
**        **
*          *
*          *
**        **
***      ***
****    ****
*****  *****
************
*/

#include <iostream>
using namespace std;

void hollowDiamondStarPattern(int N) {
    int spaces = 0;

    // Upper half
    for (int i = 0; i < N; i++) {
        int stars = N - i;

        for (int j = 0; j < stars; j++) {
            cout << "*";
        }
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        for (int j = 0; j < stars; j++) {
            cout << "*";
        }

        spaces += 2;
        cout << endl;
    }

    // Lower half
    spaces = 2 * N - 2;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        for (int j = 0; j < i; j++) {
            cout << "*";
        }

        spaces -= 2;
        cout << endl;
    }
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    hollowDiamondStarPattern(N);
    return 0;
}
