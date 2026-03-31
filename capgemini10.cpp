/*
Problem: You are given a string with multiple characters that are repeated consecutively. Reduce the size of this string using mathematical logic.

Input: bbbbddddrrrrrtttttyyyyyyy

Output: b4d4r5t5y6
*/
#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin >> s;
    if (s.empty()) {
        return 0;
    }
    string result = "";
    int cnt = 1;
    for (int i = 1; i < s.size(); i++) {
        if(s[i] == s[i-1]) {
            cnt++;
        } else {
            result += s[i-1];
            if(cnt > 1) {
                result += to_string(cnt);
            }
            cnt = 1;
        }
    }
    result += s.back();
    if(cnt > 1) {
        result += to_string(cnt);
    }
    cout << result << endl;
    return 0;
}

/*
TC:O(n)
SC:(1)
*/