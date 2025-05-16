// Sort Colors
// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
// You must solve this problem without using the library's sort function.

#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n = nums.size();
//         for (int i = 0; i < n - 1; i++) {
//             for (int j = 0; j < n - i - 1; j++) {
//                 if (nums[j] > nums[j + 1]) {
//                     swap(nums[j], nums[j + 1]);
//                 }
//             }
//         }
//     }
// };
// O(n^2) solution using bubble sort

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
// O(n) solution using Dutch National Flag algorithm
// This algorithm sorts the array in a single pass with O(1) space complexity.

int main() {
    Solution solution;
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    
    cout << "Before sorting: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    solution.sortColors(nums);

    cout << "After sorting: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
