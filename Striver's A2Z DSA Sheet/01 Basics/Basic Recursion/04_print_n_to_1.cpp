// You are given an integer n. You need to print numbers from n to 1 using recursion.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void printDescending(int n) {
        if (n == 0) {
            return;
        } else {
            cout << n << " ";
            printDescending(n - 1);
        }
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Solution obj;
    obj.printDescending(n);

    return 0;
}
