// Max Consecutive Ones
// Given a binary array nums, return the maximum number of consecutive 1's in the array.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         int maxcount = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                int count = 1;
                int j = i+1;
                while(j < nums.size() && nums[j] == 1){
                    count++;
                    j++;
                }
                i = j;
                if(maxcount < count){
                    maxcount = count;
                }
            }
        }
        return maxcount;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << "Maximum consecutive ones: " << sol.findMaxConsecutiveOnes(nums) << endl;
    return 0;
}