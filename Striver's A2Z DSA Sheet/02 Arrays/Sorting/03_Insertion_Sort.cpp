#include <iostream>
#include <vector>
using namespace std;

/*
    Algorithm: Insertion Sort
    --------------------------
    What we are doing:
    - Build a sorted portion of the array from left to right.
    - For each element, place it in its correct position in the sorted part by shifting larger elements to the right.

    Time Complexity: O(n^2) in worst case
*/

// Insertion Sort implementation
void insertionSort(vector<int> &arr) {
    int n = arr.size();

    // Start from the second element (as the first is already sorted)
    for (int i = 1; i < n; i++) {
        int key = arr[i];    // The current element to insert
        int j = i - 1;

        // Move elements that are greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // Shift element rightward
            j--;
        }

        arr[j + 1] = key;  // Insert the key at correct position
    }
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

    insertionSort(arr); // Sort the array

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}
