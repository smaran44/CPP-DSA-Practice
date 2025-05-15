// Longest subarray with sum K
// Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n = nums.size();

        for (int comb = n; comb > 0; comb--) {
            for (int start = 0; start <= n - comb; start++) {
                int sum = 0;

                for (int i = start; i < start + comb; i++) {
                    sum += nums[i];
                }

                if (sum == k) {
                    return comb;
                }
            }
        }
        return 0;  // No subarray found
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 9;

    int result = solution.longestSubarray(nums, k);
    cout << "Length of the longest subarray with sum " << k << " is: " << result << endl;

    return 0;
}