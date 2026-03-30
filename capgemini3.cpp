/*
Write the code to traverse a matrix in a spiral format.

 

Sample Input 

Input 

5   4

1   2   3   4

5   6   7   8

9   10 11 12

13 14 15 16

17 18 19 20

Output 

1  2  3  4  8  12  16  20  19  18  17  13  9  5  6  7  11  15  12  14 10 

TC:O(n*m)
SC:O(1)
*/
#include <bits/stdc++.h>
using namespace std;
int main () {
    int m = 5, n = 4;
    int a[5][4] = {{1, 2,3,4}
                    ,{5,6,7,8}
                    ,{9,10,11,12}
                    ,{13,14,15,16}
                    ,{17,18,19,20}};
                    int top = 0, bottom = m - 1, left = 0, right = n - 1;
                    while (top <= bottom && left <= right) {
                        for (int i = top; i <= bottom; i++) 
                            cout << a[i][right] << " ";
                            right--;
                        if (top <= bottom) {
                            for (int i = right; i >= left; i--) 
                            cout << a[bottom][i] << " ";
                            bottom--;
                        }
                        if (left <= right) {
                            for (int i = bottom; i >= top; i--)
                            cout << a[i][left] << " ";
                            left++;
                        }
                    }
                    return 0;
}
