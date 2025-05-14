// You are given an integer n. You need to check whether the number is a palindrome number or not.
//  Return true if it's a palindrome number, otherwise return false.
// A palindrome number is a number which reads the same both left to right and right to left.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
         int copy = x;
        long long a = 0;
        while (copy != 0){
            a = a*10 + copy%10;
            copy /= 10;
        }
        if (a == x) {
            return true;
        } else {
            return false;
        }
    }
};

int main(){
    cout<<"Enter a number: ";  
    int n;
    cin>>n;
    Solution obj;
    bool ans = obj.isPalindrome(n);
    if (ans) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}