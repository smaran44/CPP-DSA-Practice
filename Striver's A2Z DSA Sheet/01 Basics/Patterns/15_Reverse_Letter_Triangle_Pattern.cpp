/*
Pattern 15: Reverse Letter Triangle Pattern

Input: n = 4
Output:
ABCD
ABC
AB
A
*/

#include <iostream>
using namespace std;

void reverseLetterTrianglePattern(int n) {
    for (int i = n; i >= 1; i--) {
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
    reverseLetterTrianglePattern(n);
    return 0;
}
