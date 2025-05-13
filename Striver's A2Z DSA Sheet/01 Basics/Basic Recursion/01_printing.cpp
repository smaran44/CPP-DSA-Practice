// You are given an integer n. You need to print "Recursion" n times using recursion.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void printMessage(int n) {
        if (n == 0) {
            return;
        } else {
            cout << "Recursion" << endl;
            printMessage(n - 1);
        }
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Solution obj;
    obj.printMessage(n);

    return 0;
}
