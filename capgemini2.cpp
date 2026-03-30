/*
Capgemini in its online written test have a coding question, wherein the students are given a string with multiple characters that are repeated consecutively. You’re supposed to reduce the size of this string using mathematical logic given as in the example below : Input : aabbbbeeeeffggg Output: a2b4e4f2g3 Input : abbccccc Output: ab2c5
*/
#include <bits/stdc++.h>
using namespace std;
string compressString (string s) {
    string result = "";
    int n = s.length();
    for(int i = 0; i < n; i++) {
        int cnt = 0;
        while(i < n - 1 && s[i] == s[i+1]) {
            cnt++;
            i++;
        }
        result += s[i];
        if(cnt > 1) {
            result += to_string(cnt);
        }
    }
    return result;
}
int main () {
    string s;
    cin >> s;
    cout << compressString(s);
    return 0;
}
/*
TC:O(n)
SC:O(1)
*/