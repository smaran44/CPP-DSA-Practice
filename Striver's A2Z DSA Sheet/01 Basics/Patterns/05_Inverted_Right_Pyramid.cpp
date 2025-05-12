/*
Pattern 5: Inverted Right Pyramid

Input: n = 4
Output:
****
***
**
*
*/

#include <iostream>
using namespace std;

void invertedRightPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows (n): ";
    cin >> n;
    invertedRightPyramid(n);
    return 0;
}
