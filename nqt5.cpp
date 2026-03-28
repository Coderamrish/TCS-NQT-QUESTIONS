/*
Assert whether the given string has all the letters of the English alphabet or not.
If yes return "True" else return "False".
Assume the string contains nothing but lowercase English letters.
Input Format
The string to be checked.
Output Format
Display "True" if all the letters in English alphabets are present else display "False".
Note: Output is case-sensitive.
Constraints
1<=|S|<=1e^5
*/
#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin >> s;
    vector <bool> freq(26, false);
    for (char c : s ) {
        freq[c - 'a'] = true;
    }
    for (int i = 0; i < 26; i++) {
        if  (!freq[i]) {
            cout << "False";
            return 0;
        }
    }
    cout << "True";
    return 0;
}

/*
TC:O(N)
SC: O(1)

2nd method
*/
#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
     cin >> s;
     unordered_set<char>st(s.begin(), s.end());
     if(st.size() == 26) {
        cout << "True";
     } else {
        cout << "False";
     }
}