/*
Character Count with Minimum
Problem: Count the occurrences of each character in the string. If the occurrence of a character is less than 2, treat it as having occurred 2 times instead. Calculate the total number of occurrences and print the result.

Input: "balloon"

Output: 12
*/
#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin >> s;
    vector <int> freq(26, 0);
    for (char ch : s) {
        freq[ch - 'a']++;
    }
    int total = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] == 1) {
            total += 2;
        } else if(freq[i] > 1) {
            total += freq[i] + 1;
        }
    }
    cout << total;
    return 0;
}

/*
TC:O(n)
SC:O(1)
*/