// You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

// You should return the array of nums such that the the array follows the given conditions:

// Every consecutive pair of integers have opposite signs.
// For all integers with the same sign, the order in which they were present in nums is preserved.
// The rearranged array begins with a positive integer.
// Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> positive, negative, result;
        for (int num : nums) {
            if (num > 0) {
                positive.push_back(num);
            } else {
                negative.push_back(num);
            }
        }

        for (int i = 0; i < positive.size(); ++i) {
            result.push_back(positive[i]);
            result.push_back(negative[i]);
        }

        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 1, -2, -5, 2, -4};

    vector<int> result = solution.rearrangeArray(nums);
    
    cout << "Rearranged array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}