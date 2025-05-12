/*
Pattern 22: The Number Pattern

Input Format: N = 3
Result:
3 3 3 3 3 
3 2 2 2 3 
3 2 1 2 3 
3 2 2 2 3 
3 3 3 3 3

Input Format: N = 6
Result:
6 6 6 6 6 6 6 6 6 6 6 
6 5 5 5 5 5 5 5 5 5 6 
6 5 4 4 4 4 4 4 4 5 6 
6 5 4 3 3 3 3 3 4 5 6 
6 5 4 3 2 2 2 3 4 5 6 
6 5 4 3 2 1 2 3 4 5 6 
6 5 4 3 2 2 2 3 4 5 6 
6 5 4 3 3 3 3 3 4 5 6 
6 5 4 4 4 4 4 4 4 5 6 
6 5 5 5 5 5 5 5 5 5 6 
6 6 6 6 6 6 6 6 6 6 6
*/

#include <iostream>
using namespace std;

void numberPattern(int N) {
    int size = 2 * N - 1;

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            int layer = min(min(row, col), min(size - 1 - row, size - 1 - col));
            cout << (N - layer) << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    numberPattern(N);
    return 0;
}
