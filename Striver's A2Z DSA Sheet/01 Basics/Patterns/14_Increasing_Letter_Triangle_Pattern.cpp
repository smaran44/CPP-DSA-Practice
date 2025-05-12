/*
Pattern 14: Increasing Letter Triangle Pattern

Input: n = 4
Output:
A
AB
ABC
ABCD
*/

#include <iostream>
using namespace std;

void increasingLetterTrianglePattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << char('A' + j - 1); // Print the corresponding letter
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows (n): ";
    cin >> n;
    increasingLetterTrianglePattern(n);
    return 0;
}
