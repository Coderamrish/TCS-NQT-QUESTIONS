/*
Check Palindrome
Problem: Determine if a string reads the same backward as forward.

Input: "racecar"

Output: True
*/
#include <iostream>
#include <string>
using namespace std;
bool isPlaindrome(string s) {
    int left = 0, right = s.length() - 1;
while (left < right) {
    if (s[left] != s[right]) {
        return false;
        left++;
        right--;
    }
}
return true;
}
int main () {
    string s;
    cin >> s;
    if(isPlaindrome(s)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
/*
TC : O(n)
SC: O(1)

2nd method
*/
#include <iostream>
#include <algorithm>
bool isPlaindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}