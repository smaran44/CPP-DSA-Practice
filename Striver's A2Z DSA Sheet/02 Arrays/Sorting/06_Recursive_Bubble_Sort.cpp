#include <iostream>
#include <vector>
using namespace std;

// Recursive Bubble Sort: Repeatedly swaps adjacent elements if they are in the wrong order.
void bubbleSortRecursive(vector<int> &arr, int n) {
    if (n == 1) return; // Base case: Only one element left

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    // Recursive call for the remaining array
    bubbleSortRecursive(arr, n - 1);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSortRecursive(arr, n);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
