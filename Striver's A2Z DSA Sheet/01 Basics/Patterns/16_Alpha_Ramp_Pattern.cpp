/*
Pattern 16: Alpha Ramp Pattern

Input: n = 4
Output:
A
BB
CCC
DDDD
*/

#include <iostream>
using namespace std;

void alphaRampPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << char('A' + i - 1); // Print the current letter, repeated i times
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows (n): ";
    cin >> n;
    alphaRampPattern(n);
    return 0;
}
