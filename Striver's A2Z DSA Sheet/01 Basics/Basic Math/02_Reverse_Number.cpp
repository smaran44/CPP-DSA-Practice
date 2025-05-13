// You are given an integer n. Return the integer formed by placing the digits of n in reverse order.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {
        int copy = n;
        int a = 0;
        while (copy != 0){
            a = a*10 + copy%10;
            copy /= 10;
        }
        return a;
    }
};

int main(){
    cout<<"Enter a number: ";  
    int n;
    cin>>n;
    Solution obj;
    int ans = obj.reverseNumber(n);
    cout<<ans;
    return 0;
}