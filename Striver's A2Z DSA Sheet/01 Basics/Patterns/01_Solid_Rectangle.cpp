/*
Pattern 1: Solid Rectangle

Input: n = 3, m = 5
Output:
*****
*****
*****
*/

#include <iostream>
using namespace std;

void solidRectangle(int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cout << "Enter number of rows (n): ";
    cin >> n;
    cout << "Enter number of columns (m): ";
    cin >> m;
    solidRectangle(n, m);
    return 0;
}
