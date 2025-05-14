// Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > largest){
                largest = nums[i];
            }
        }
        int secondLargest = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == largest){
                continue;
            }
            if(nums[i] > secondLargest){
                secondLargest = nums[i];
            }
        }

        if(secondLargest == INT_MIN){
                return -1; 
            }
        
        return secondLargest;
    }    
};

int main() {
    Solution solution;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = solution.secondLargestElement(nums);
    cout << "The second largest element is: " << result << endl;

    return 0;
}