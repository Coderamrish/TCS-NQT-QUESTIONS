/*
Balanced Parentheses
Problem: Check if a string of parentheses is balanced.

Input: "{[()]}"

Output: True
*/

#include <iostream>
#include <stack>
using namespace std;
bool isBalanced(string s) {
    stack<char> st;
    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else {
            if (st.empty()) return false;
            char top = st.top();
            st.pop();
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }
    return st.empty();
}
int main() {
    string s = "{[()]}";
    cout << (isBalanced(s) ? "True" : "False");
    return 0;
}

/*
Tc:o(n)
SC:O(N)
*/