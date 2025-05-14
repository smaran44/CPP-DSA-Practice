// Given an array, we have found the number of occurrences of each element in the array.

#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{
    vector<int> visited(n, 0);

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1)
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = 1;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    countFreq(arr, n);
    return 0;
}