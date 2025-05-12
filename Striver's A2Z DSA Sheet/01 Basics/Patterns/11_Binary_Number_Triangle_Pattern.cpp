/*
Pattern 11: Binary Number Triangle Pattern

Input: n = 4
Output:
1
10
101
1010
*/

#include <iostream>
using namespace std;

void binaryNumberTrianglePattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            // Print 1 if the column number is odd, otherwise print 0
            cout << (j % 2);
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows (n): ";
    cin >> n;
    binaryNumberTrianglePattern(n);
    return 0;
}
