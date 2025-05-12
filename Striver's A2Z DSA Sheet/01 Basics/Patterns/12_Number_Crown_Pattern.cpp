/*
Pattern 12: Number Crown Pattern

Input: n = 5
Output:
12345
23456
34567
45678
56789
*/

#include <iostream>
using namespace std;

void numberCrownPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < i + n; j++) {
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows (n): ";
    cin >> n;
    numberCrownPattern(n);
    return 0;
}
