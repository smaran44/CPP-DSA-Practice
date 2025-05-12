/*
Pattern 2: Right-Angled Triangle (Increasing)

Input: n = 5
Output:
*
**
***
****
*****
*/

#include <iostream>
using namespace std;

void pattern2(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    pattern2(n);
    return 0;
}
