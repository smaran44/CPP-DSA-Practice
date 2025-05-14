// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> copy(nums);
        int n = nums.size();
        k = k % n; // Handle cases where k is greater than n
        for(int i = 0; i < n; i++) {
          nums[(i + k) % n] = copy[i];
        }
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    solution.rotate(nums, k);

    cout << "Rotated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}