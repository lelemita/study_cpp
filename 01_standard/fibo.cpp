#include <iostream>
#include <map>
using namespace std;

int memo[100] = {0, 1, 1};

int fibo(int n) {
    if (n == 0) {
        return 0;
    } else if (memo[n] == 0) {
        memo[n] = fibo(n - 1) + fibo(n - 2);
    }
    return memo[n];
}

int main(void) {
    cout << fibo(10) << endl;
    return 0;
}