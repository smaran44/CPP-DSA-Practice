// Maximum Subarray
// Given an integer array nums, find the subarray with the largest sum, and return its sum.

#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int maxSum = INT_MIN;

//         for (int i = 0; i < nums.size(); i++) {
//             int currentSum = 0;
//             for (int j = i; j < nums.size(); j++) {
//                 currentSum += nums[j];
//                 maxSum = max(maxSum, currentSum);
//             }
//         }

//         return maxSum;
//     }
// }; O(n^2) solution

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currentSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "The maximum subarray sum is: " << solution.maxSubArray(nums) << endl;
    return 0;
}