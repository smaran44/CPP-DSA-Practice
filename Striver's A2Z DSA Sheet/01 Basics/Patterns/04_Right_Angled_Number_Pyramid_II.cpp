/*
Pattern 4: Right-Angled Number Pyramid II

Input: n = 4
Output:
1
22
333
4444
*/

#include <iostream>
using namespace std;

void rightAngledNumberPyramidII(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;  // Print the current row number
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows (n): ";
    cin >> n;
    rightAngledNumberPyramidII(n);
    return 0;
}
