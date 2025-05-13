// You are given an integer n. You need to check if the number is prime or not.
// Return true if it is a prime number, otherwise return false.
// A prime number is a number which has no divisors except 1 and itself.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) {
            return false; 
        }
        if (n == 2) {
            return true; 
        }

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false; // n is divisible by i, so it's not prime
            }
        }
        return true;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Solution obj;
    bool ans = obj.isPrime(n);
    if (ans) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}