// Single Number
// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
    /*   sort(nums.begin(), nums.end());
        for(int i =0; i < nums.size()-1; i = i+2){
            if(nums[i] != nums[i+1]){
                return nums[i];
            }
        }
        return nums[nums.size()-1];
        // we cant use sort function because it will take O(nlogn) time complexity
        */

       int result = 0;
        for (int num : nums) {
            result ^= num;  // XOR all numbers
        }
        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "The single number is: " << solution.singleNumber(nums) << endl;
    return 0;
}