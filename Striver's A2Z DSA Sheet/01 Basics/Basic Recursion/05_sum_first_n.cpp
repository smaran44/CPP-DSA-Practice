// You are given an integer n. You need to return the sum of the first n natural numbers using recursion.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumFirstN(int n) {
        if (n == 0) {
            return 0;
        } else {
            return n + sumFirstN(n - 1);
        }
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Solution obj;
    int sum = obj.sumFirstN(n);
    cout << "Sum of first " << n << " numbers is: " << sum << endl;

    return 0;
}
