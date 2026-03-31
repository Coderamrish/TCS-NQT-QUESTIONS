/*
Prime Number Division Check
Problem: Check if a number is prime, and if dividing that number by another number results in a prime number then print the prime number.
*/
#include <iostream>
using namespace std;
bool isPrime(int n) {
    if(n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}
int main() {
    int N, D;
    cin >> N >> D;
    int res = N/ D;
    if (isPrime(N)) {
        cout << res << endl;
    }
    return 0;
}

/*
TC:O(sqrt(N))
SC:O(1)
*/