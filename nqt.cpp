/*
Alice challenged Bob to write the same word as his on a typewriter. Both are kids and are making some mistakes in typing and are making use of the ‘#’ key on a typewriter to delete the last character printed on it. An empty text remains empty even after backspaces. 

Input Format
The first line contains a string typed by Bob.

The second line contains a string typed by Alice.

Output Format
The first line contains ‘YES’ if Alice is able to print the exact words as Bob, otherwise ‘NO’.

Constraints
1 <= Bob.length

Alice.length <= 100000

Bob and Alice only contain lowercase letters and '#' characters.
*/
#include <bits/stdc++.h>
using namespace std;
string process(string s) {
    int i = s.size() - 1;
    int skip = 0;
    string res = " ";
    while (i >= 0) {
        if (s[i] == '#') {
            skip++;
            i--;
        } else if (skip > 0) {
            skip--;
            i--;
        } else {
            res.push_back(s[i]);
            i--;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}
int main () {
    string bob , alice;
    cin >> bob >> alice;
    if (process(bob)== process(alice)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}

/*
TC : O(N + M)
SC: O(N+M)
*/