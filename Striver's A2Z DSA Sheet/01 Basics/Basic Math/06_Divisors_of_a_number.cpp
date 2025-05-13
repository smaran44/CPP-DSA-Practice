// You are given an integer n. You need to find all the divisors of n.
//  Return all the divisors of n as an array or list in a sorted order.
// A number which completely divides another number is called it's divisor.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> result;
        for(int i = 1; i <= n; i++) {
            if(n % i == 0) {
                result.push_back(i);
            }
        }
        return result;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Solution obj;
    vector<int> ans = obj.divisors(n);
    
    cout << "Divisors of " << n << ": ";
    for (int i : ans) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
