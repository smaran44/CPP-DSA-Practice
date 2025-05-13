// The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence,
//  such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,
// F(0) = 0, F(1) = 1
// F(n) = F(n - 1) + F(n - 2), for n > 1.
// Given n, calculate F(n).

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if(n == 0) {
            return 0;
        } else if(n == 1) {
            return 1;
        } else {
            return fib(n - 1) + fib(n - 2);
        }
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Solution obj;
    int result = obj.fib(n);
    cout << "Fibonacci of " << n << " is: " << result << endl;

    return 0;
}