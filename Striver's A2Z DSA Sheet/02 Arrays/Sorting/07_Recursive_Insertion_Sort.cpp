#include <iostream>
#include <vector>
using namespace std;

/*
    Algorithm: Recursive Insertion Sort
    -----------------------------------
    What we are doing:
    - Recursively sort the first n-1 elements.
    - Insert the nth element into its correct position in the sorted part.

    Time Complexity: O(n^2) in worst case
*/

// Recursive function to sort the array
void recursiveInsertionSort(vector<int> &arr, int n) {
    // Base case: If the array has 1 or no elements, it is already sorted
    if (n <= 1) {
        return;
    }

    // Recursively sort the first n-1 elements
    recursiveInsertionSort(arr, n - 1);

    // Insert the nth element into its correct position
    int key = arr[n - 1];
    int j = n - 2;

    // Move elements that are greater than key to one position ahead
    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = key; // Place the key at its correct position
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

    recursiveInsertionSort(arr, n); // Sort the array

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}