/*
Luke has a bookshelf with n books, each with height aia_iai​. He recently bought a new shelf to keep some of his books since the first one was almost full. To add books to his new shelf:
He walks from left to right, deciding for each book whether to leave it or place it on the new shelf. Books on the new shelf must be in strictly increasing order of height.
Your task is to find the maximum number of books Luke can place on his new shelf in increasing order of height.
Input Format
The first line of the input contains a single integer n – the number of books.
The second line of the input contains n space-seperated integers a1, a2, …, an – the height of the books where ai represents the height of the ith book from the left.
Output Format
Print a single integer, the maximum number of books he can place on the new shelf satisfying the given conditions.
Constraints
1 <= n <= 104
0 <= ai <= 108 
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        vector<int> temp;
        for(int x : a) {
            auto it = lower_bound(temp.begin(), temp.end(), x);
            if(it == temp.end()){
                temp.push_back(x);
            } else {
                *it = x;
            }
        }
        cout << temp.size() << endl;
    }
}

/*
TC:O(N logn)
SC:O(N)
*/