#include <iostream>
#include <vector>
using namespace std;

/*
    Algorithm: Quick Sort
    -----------------------
    What we are doing:
    - Choose a pivot element (last element here).
    - Partition the array: place pivot at correct position, elements smaller to its left, greater to its right.
    - Recursively sort the left and right parts.

    Time Complexity:
    - Average case: O(n log n)
    - Worst case: O(n^2) (when array is already sorted or reverse sorted and pivot is poorly chosen)
*/

// Partition function: rearranges elements and returns pivot's correct position
int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[high]; // Choosing last element as pivot
    int i = low;           // Index of smaller element

    for (int j = low; j < high; j++) {
        // If current element is smaller than pivot, swap it to correct side
        if (arr[j] < pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }

    // Place pivot at its correct sorted position
    swap(arr[i], arr[high]);

    return i; // Return pivot index
}

// Recursive Quick Sort function
void quickSort(vector<int> &arr, int low, int high) {
    if (low < high) {
        // Partition the array and get pivot index
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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

    quickSort(arr, 0, arr.size() - 1); // Sort the array

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}
