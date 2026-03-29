/*
Team A has set a target of N-1 runs. Team B's goal is to score exactly N-1 runs to win. You are given an array of length N, where each element represents the maximum number of runs Team B can score on that particular ball. Team B will play one ball at a time and can score anywhere between 0 and the value given in the array for that ball.

The total number of balls Team B plays will equal the total number of runs they score. Starting from the first ball (index 0), your task is to determine if Team B can score exactly N-1 runs by selecting appropriate runs from each ball. You need to return true if Team B can score exactly N-1 runs or false if it is not possible.

Input Format
The first line of input should be a single integer N representing the length of the array.

The second line of input should contain N space-separated integer a1, a2, a3.... aN where ai value represents the maximum run team B can score on ith ball.

Output Format
Output a single Boolean value (true or false):

true: If it's possible for Team B to score exactly N-1 runs.

false: If it's not possible to reach the target.

Constraints
1 <= arr.length <= 10^5

0 <= arr[i] <= 10^5
*/
#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        int cnt = 0;
        for (int x : a) {
            if (x >= 1) {
                cnt++;
            }
        }
        cout << (cnt == n - 1 ? "true" : "false") << endl;
    }
    return 0;
}