// You are given an array of n elements. You need to reverse the array using recursion.

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void reverse(int arr[], int start, int end) {
   if (start < end) {
      swap(arr[start], arr[end]);
      reverse(arr, start + 1, end - 1);
   }
}
    void reverseArray(int arr[], int n) {
        reverse(arr, 0, n - 1);
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }
};

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    obj.reverseArray(arr, n);

    return 0;
}
