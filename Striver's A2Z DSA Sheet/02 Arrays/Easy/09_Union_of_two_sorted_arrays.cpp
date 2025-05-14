// Union of two sorted arrays
// Given two sorted arrays nums1 and nums2, return an array that contains the union of these two arrays. The elements in the union must be in ascending order.
// The union of two arrays is an array where all values are distinct and are present in either the first array, the second array, or both.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> unionArray(nums1);
        unionArray.insert(unionArray.end(), nums2.begin(), nums2.end());
        sort(unionArray.begin(), unionArray.end()); 
        for(int i = 0; i < unionArray.size(); i++) {
            if (i > 0 && unionArray[i] == unionArray[i - 1]) {
                unionArray.erase(unionArray.begin() + i);
                i--; // Decrement i to check the next element after erasing
            }
        }
        return unionArray;
    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {1, 2, 4, 5, 6};
    vector<int> nums2 = {2, 3, 5, 7};
    
    vector<int> result = solution.unionArray(nums1, nums2);
    
    cout << "Union of the two arrays: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}