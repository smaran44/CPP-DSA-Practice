/*
Pattern 8: Inverted Star Pyramid

Input: n = 4
Output:
*******
 *****
  ***
   *
*/

#include <iostream>
using namespace std;

void invertedStarPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows (n): ";
    cin >> n;
    invertedStarPyramid(n);
    return 0;
}
