/*
Binary Search
Problem: Implement binary search to find a target value in a sorted array.

Input:

Array: [1, 2, 3, 4, 5, 6, 7, 8, 9]
Target: 4

Output: 3 (index of target)
*/

#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
if(arr[mid] == target) {
    return mid;
} else if (arr[mid] < target) {
    low = mid + 1;
} else {
    high = mid - 1;
}
    }
    return -1;
}
int main () {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n= 9;
    int target = 4;
    cout << binarySearch(arr, n, target);
}

/*
TC:O(log n)
SC : O(1)
*/