// Left Rotate Array by One
// Given an integer array nums, rotate the array to the left by one.
// Note: There is no need to return anything, just modify the given array.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
    int copy = nums[0];
    for( int i = 1; i < nums.size(); i++){
        nums[i-1] = nums[i];
    }
    nums[nums.size()-1] = copy;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5};
    
    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    sol.rotateArrayByOne(nums);

    cout << "Array after rotation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}