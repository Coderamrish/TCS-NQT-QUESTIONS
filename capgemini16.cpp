/*
Missing Number in Array
Problem: Find the missing number in an array of integers from 1 to n.

Input: [1, 2, 4, 5, 6]

Output: 3
*/
#include <iostream>
#include <vector>
using namespace std;
int missingno(vector <int>& nums) {
    int n = nums.size() + 1;
    int sum = (n * (n + 1)) / 2;
    int s2 = 0;
    for(int i = 0; i < n; i++) {
        s2 += nums[i];
    }
    int missNum = sum - s2;
    return missNum;
}
int main () {
    vector <int> nums = {1, 2, 4, 5 ,6};
    int n = 6;
    cout << missingno(nums);
    return 0;
}

/*
TC : O(n)
SC : O(1)

2nd method using XOR
*/

#include <iostream>
#include <vector>
using namespace std;
int missingNumberXOR(vector<int>& arr, int n) {
    int xor1 = 0, xor2 = 0;
    for (int i = 1; i <= n; i++)
        xor1 ^= i;
    for (int x : arr)
        xor2 ^= x;
    return xor1 ^ xor2;
}
int main() {
    vector<int> arr = {1, 2, 4, 5, 6};
    int n = 6;
    cout << "Missing Number (XOR Method): " 
         << missingNumberXOR(arr, n) << endl;
    return 0;
}

