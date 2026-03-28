/*
Sid is reading a paragraph of a story and notices N different sentences. He's curious to know which sentence is the longest. Help Sid find the length of the longest sentence in the story. Sentences are separated by a comma(,),no other symbols are used except comma.
Input Format
The first line of input contains a string where sentences are separated by commas ( ,) 
Output Format
Display a single integer, that denotes the length of the longest sentence.
Constraints
 1<=N<=20
*/
#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    getline(cin, s);
    int maxLen = 0, currLen = 0;;
    for(char c : s) {
        if (c == ','){
            maxLen = max(maxLen, currLen);
            currLen = 0;
        } else {
            currLen++;
        }
    }
    maxLen = max(maxLen, currLen);
    cout << maxLen;
    return 0;
}

/*
TC:O(N)
SC:O(1)
2nd Method
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string temp;
    int maxLen = 0;
    while (getline(ss, temp, ',')) {
        maxLen = max(maxLen, (int)temp.size());
    }
    cout << maxLen;
    return 0;
}
