/*
Similar String Check
Problem: Check if given strings are similar or not. If yes then print the size of string in binary, if not then print zero. Both strings are of same size, similar means just the letters are rearranged.

Input:

String 1: "abcd"
String 2: "dbca"
Output:

100 (4 in binary)
*/
#include <bits/stdc++.h>
using namespace std;
string toBinary(int n) {
    string res = "";
    while (n > 0) {
        res = char((n%2) + '0') + res;
        n /= 2;
    }
    return res;
}
int main () {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() != s2.size()) {
        cout << 0;
        return 0;
    }
    vector<int>freq(26, 0);
    for(char ch : s1) freq[ch - 'a']++;
    for(char ch : s2) freq[ch - 'a']--;
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            cout << 0;
            return 0;
        }
        cout << toBinary(s1.size());
    }
    return 0;
}
/*
TC:O(n)
SC:O(1)
*/