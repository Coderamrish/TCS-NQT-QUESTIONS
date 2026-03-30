/*
A function is there which tells how many dealerships there are and the total number of cars in each dealership.

Your job is to calculate how many tyres would be there in each dealership.

Input

3 

4 2

4 0

1 2

Output

20

16

8

There are total 3 dealerships

dealerships1 contains 4 cars and 2 bikes

dealerships2 contains 4 cars and 0 bikes

dealerships3 contains 1 cars and 2 bikes

Total number of tyres in dealerships1  is (4 x 4) + (2 x 2) = 20

Total number of tyres in dealerships2 is (4 x 4) + (0 x 2) = 16

Total number of tyres in dealerships3 is (1 x 4) + (2 x 2) = 8
*/
#include <iostream>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int cars, bikes;
        cin >> cars >> bikes;
        int tyres = (cars * 4) + (bikes * 2);
        cout << tyres << endl;
    }
    return 0;
}

/*
TC :O(t)
SC:O(1)
*/