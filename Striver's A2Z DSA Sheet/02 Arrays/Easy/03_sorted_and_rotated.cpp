//Check if array is sorted and rotated

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }
        if (count > 1) {
            return false; 
        }else{
            return true; 
        }
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

    bool result = solution.check(nums);
    cout << (result ? "Array is sorted and rotated" : "Array is not sorted and rotated") << endl;

    return 0;
}