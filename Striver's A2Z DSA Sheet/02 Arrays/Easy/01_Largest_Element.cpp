// Given an array of integers nums, return the value of the largest element in the array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largest = nums[0];
       for(int i = 1; i < nums.size(); i++){
        if(nums[i] > largest){
          largest = nums[i];
        }
       }
       return largest;
    }
};

int main() {
    Solution solution;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int largest = solution.largestElement(nums);
    cout << "The largest element is: " << largest << endl;
    return 0;
}