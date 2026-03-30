/*
Write a function to solve the following equation a3 + a2b + 2a2b + 2ab2 + ab2 + b3.

Write a program to accept three values in order of a, b and c and get the result of the above equation.
*/
#include <iostream>
using namespace std;
int solve (int a, int b) {
    return (a+b) * (a + b) * (a+b);
}
int main () {
    int a, b, c;
    cin >> a >> b >> c;
    cout << solve (a, b);
    return 0;
}
/*
TC O(1)
SC:O(1)
*/