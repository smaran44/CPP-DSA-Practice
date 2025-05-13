// You are given an integer n. You need to check whether it is an armstrong number or not. 
// Return true if it is an armstrong number, otherwise return false.
// An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        int copy = n;
        int digits = 0;
        while (copy != 0) {
            digits++;
            copy /= 10;
        }

        copy = n;
        int sum = 0;
        while (copy != 0) {
            int digit = copy % 10;
            sum += pow(digit, digits);
            copy /= 10;
        }

        return sum == n;
    }
};

int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;

    Solution obj;
    bool ans = obj.isArmstrong(n);
    if (ans) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}