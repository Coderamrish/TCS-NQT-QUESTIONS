/*
You have write a function that accepts, a string which length is “len”, the string has some “#”, in it you have to move all the hashes to the front of the string and return the whole string back and print it.
char* moveHash(char str[],int n);
Example :
Sample Test Case
Input:
Move#Hash#to#Front
Output:
###MoveHashtoFront
*/
#include <bits/stdc++.h>
using namespace std;
char* moveHash(char str[], int n) {
    static char result[1000];
    int hashCount = 0, index = 0;
    for(int i = 0; i < n; i++) {
        if(str[i] == '#') {
            hashCount++;
        }
    }
    for (int i = 0; i < hashCount; i++) {
        result[index++] = '#';
    }
    for (int i = 0; i < n; i++) {
        if (str[i] != '#') {
            result[index++] = str[i];
        }
    }
    result[index] = '\0';
    return result;
}
int main() {
    char str[] = "Move#hash#to#Front";
    int n = strlen(str);
    char *result = moveHash(str, n);
    cout << result << endl;
    return 0;
}
/*
TC:O(n)
SC:O(n)
*/