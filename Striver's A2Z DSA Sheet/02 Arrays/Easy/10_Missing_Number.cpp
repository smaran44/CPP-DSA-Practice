// Missing Number
// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        for(int i = 0; i <= nums.size(); i++) {
            int j; // to use after for loop
            for(j = 0; j < nums.size(); j++) {
                if(nums[j] == i){
                    break;
                }
            }
          if(j == nums.size()){ // the loop finishes at j == nums.size()
            return i;
          }
        }   
        return -1;         
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 0, 1};
    cout << "Missing number: " << solution.missingNumber(nums) << endl;
    return 0;
}