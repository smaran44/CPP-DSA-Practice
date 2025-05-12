/*
Pattern 21: Hollow Rectangle Pattern

Input Format: N = 3
Result:
***
* *
***

Input Format: N = 6
Result:
******
*    *
*    *
*    *
*    *
******
*/

#include <iostream>
using namespace std;

void hollowRectanglePattern(int N) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            if (row == 0 || row == N - 1 || col == 0 || col == N - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    hollowRectanglePattern(N);
    return 0;
}
