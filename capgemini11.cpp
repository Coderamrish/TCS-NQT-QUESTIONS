/*
Move Hashes to Front
Problem: Write a function that accepts a string with some "#" in it. Move all the hashes to the front of the string and return the modified string.

Input: Move#Hash#to#Front

Output: ###MoveHashtoFront
*/
#include <iostream>
#include <string>
using namespace std;
string moveHashes(const string& s) {
    int cntHash = 0;
    string temp = "";
    for (char ch : s) {
        if(ch == '#') {
            cntHash++;
        } else {
            temp += ch;
        }
    }
    return string (cntHash, '#') + temp;
}
int main () {
    string s;
    cin >> s;
    cout << moveHashes(s) << "\n";
    return 0;
}

/*
TC:O(n)
SCO(1)
*/