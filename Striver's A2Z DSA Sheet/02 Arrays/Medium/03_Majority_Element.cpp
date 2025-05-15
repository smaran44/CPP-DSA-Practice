// Majority Element
// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times.
// You may assume that the majority element always exists in the array.
// time complexity should not become or exceed O(n^2)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[nums[i]]++;
        if (freq[nums[i]] > n / 2) {
            return nums[i]; 
        }
    }
    return -1; 
}
};

int main() {
    Solution solution;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << "The majority element is: " << solution.majorityElement(nums) << endl;
    return 0;
}
