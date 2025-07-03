// Given an array arr of n integers, where arr[i] represents price of the stock on the ith day. Determine the maximum profit achievable by buying and selling the stock at most once. 
// The stock should be purchased before selling it, and both actions cannot occur on the same day.

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int stockBuySell(vector<int> arr, int n){
        int maxProfit = 0;
        int minPrice = INT_MAX;

        for (int i = 0; i < arr.size(); i++) {
            minPrice = min(minPrice, arr[i]);
            maxProfit = max(maxProfit, arr[i] - minPrice);
        }

        return maxProfit;
    }
};

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter stock prices: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    Solution sol;
    int result = sol.stockBuySell(arr, n);
    cout << "Maximum Profit: " << result << endl;
    return 0;
}