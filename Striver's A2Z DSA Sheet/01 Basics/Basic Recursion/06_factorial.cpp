// You are given an integer n. You need to return the factorial of n using recursion.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int factorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        } else {
            return n * factorial(n - 1);
        }
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Solution obj;
    int fact = obj.factorial(n);
    cout << "Factorial of " << n << " is: " << fact << endl;

    return 0;
}
