// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters,
// it reads the same forward and backward. Alphanumeric characters include letters and numbers.
// Given a string s, return true if it is a palindrome, or false otherwise.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string copy = "";

        // Step 1 & 2: Filter and convert to lowercase
        for (char ch : s) {
            if (isalnum(ch)) {//isalnum checks if the character is alphanumeric
                copy += tolower(ch);
            }
        }

        // Step 3: Two-pointer check
        int left = 0;
        int right = copy.length() - 1;

        while (left < right) {
            if (copy[left] != copy[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};

int main() {
    Solution sol;
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    bool result = sol.isPalindrome(s);

    if (result) {
        cout << "\"" << s << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << s << "\" is not a palindrome." << endl;
    }

    return 0;
}
