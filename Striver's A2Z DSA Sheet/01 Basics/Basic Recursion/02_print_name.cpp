// You are given a string and an integer n. You need to print the name n times using recursion.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void printName(int n, string name) {
        if (n == 0) {
            return;
        } else {
            cout << name << endl;
            printName(n - 1, name);
        }
    }
};

int main() {
    int n;
    string name;
    cout << "Enter a name: ";
    cin >> name;
    cout << "Enter how many times to print: ";
    cin >> n;

    Solution obj;
    obj.printName(n, name);

    return 0;
}
