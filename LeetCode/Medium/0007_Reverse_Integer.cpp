// You are given an integer n. Return the integer formed by placing the digits of n in reverse order.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
         int copy = x;
        long long a = 0;
        while (copy != 0){
            a = a*10 + copy%10;
            copy /= 10;
        }
        // Check if result fits in 32-bit signed int range
        if (a < INT_MIN || a > INT_MAX)
            return 0;
        return (int)a;
    }
};

int main(){
    cout<<"Enter a number: ";  
    int n;
    cin>>n;
    Solution obj;
    int ans = obj.reverse(n);
    cout<<ans;
    return 0;
}