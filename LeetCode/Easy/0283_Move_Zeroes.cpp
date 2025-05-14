// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        for (int i = 0; i < size; i++) {
        if(nums[i] == 0){
            for(int j = i+1; j < size; j++){
                nums[j-1] = nums[j];
            }
            nums[size-1] = 0;
            size--; // Reduce size to avoid moving zeros again
            i--;  // Decrement i to check the next element after shifting
        }
    }    
    }
};

int main() {
    Solution solution;
    vector<int> nums = {0, 1, 0, 3, 12};
    solution.moveZeroes(nums);

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}