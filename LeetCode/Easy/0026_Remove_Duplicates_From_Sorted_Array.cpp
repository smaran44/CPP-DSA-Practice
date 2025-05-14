// Remove Duplicates from Sorted Array
// Given an integer array nums sorted in non-decreasing order, remove all duplicates in-place so that each unique element appears only once. Return the number of unique elements in the array.
// If the number of unique elements be k, then,
// Change the array nums such that the first k elements of nums contain the unique values in the order that they were present originally.
// The remaining elements, as well as the size of the array does not matter in terms of correctness.
// An array sorted in non-decreasing order is an array where every element to the right of an element is either equal to or greater in value than that element.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int count = 1;
       for(int i = 1; i < nums.size(); i++){
        if(nums[i]> nums[i-1]){
            nums[count] = nums[i];
            count++;
        }
       }
       return count;
    }
};

int main() {
    Solution solution;
    vector<int> nums;
    int n, element;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> element;
        nums.push_back(element);
    }

    int k = solution.removeDuplicates(nums);

    cout << "Number of unique elements: " << k << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}