// Two Sum
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> sol;
//         for(int i = 0; i < nums.size(); i++){
//             for(int j = i+1; j < nums.size(); j++){
//                 if(nums[i] + nums[j] == target){
//                     sol.push_back(i);
//                     sol.push_back(j);
//                 }
//             }
//         }
//         return sol;
//     }
// };
// O(n^2) solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // To store the indices of the numbers
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end()) {
                result.push_back(numMap[complement]);
                result.push_back(i);
                return result;
            }
            numMap[nums[i]] = i; // Store the index of the current number
        }

        return result; // In case no solution is found
    }
};
// O(n) solution using hash map

int main() {
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = solution.twoSum(nums, target);
    
    cout << "Indices of the two numbers that add up to " << target << ": ";
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}