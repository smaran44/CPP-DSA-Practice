/*
Pattern 13: Increasing Number Triangle Pattern

Input: n = 4
Output:
1
12
123
1234
*/

#include <iostream>
using namespace std;

void increasingNumberTrianglePattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows (n): ";
    cin >> n;
    increasingNumberTrianglePattern(n);
    return 0;
}
