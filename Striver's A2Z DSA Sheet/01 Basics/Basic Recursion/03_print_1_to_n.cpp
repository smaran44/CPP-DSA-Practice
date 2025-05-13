// You are given an integer n. You need to print numbers from 1 to n using recursion.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void printAscending(int i, int n) {
        if (i > n) {
            return;
        } else {
            cout << i << " ";
            printAscending(i + 1, n);
        }
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Solution obj;
    obj.printAscending(1, n);

    return 0;
}
