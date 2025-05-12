/*
Input Format: N = 3 
Result:
C
B C
A B C

Input Format: N = 6
Result:   
F
E F
D E F
C D E F
B C D E F
A B C D E F
*/

#include <iostream>
using namespace std;

void alphaTrianglePattern(int N) {
    for (int row = 0; row < N; row++) {
        for (int col = N - 1 - row; col < N; col++) {
            cout << char('A' + col) << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    alphaTrianglePattern(N);

    return 0;
}
