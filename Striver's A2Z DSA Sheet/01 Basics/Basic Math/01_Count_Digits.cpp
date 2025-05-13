// You are given an integer n. You need to return the number of digits in the number.

// The number will have no leading zeroes, except when the number is 0 itself.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDigit(int n) {
        
        if (n == 0) return 1;
        
        int copy = n;
        int digits = 0;
        while(copy != 0){
            digits++;
            copy /= 10;
        }
        return digits;
    }
};

int main(){
    int n;
    
    cout<<"Enter number : ";
    cin>>n;
    
    Solution obj;
    int NumberOfDigits = obj.countDigit(n);
    cout<<NumberOfDigits<<endl;
}