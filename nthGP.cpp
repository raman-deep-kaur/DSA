#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

// Function to compute (base^exp) % MOD efficiently
long long modPow(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;

    while (exp > 0) {
        if (exp % 2 == 1) {         // If exponent is odd
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }

    return result;
}

int nthTermOfGP(int N, int A, int R) {
    long long power = modPow(R, N - 1, MOD);
    return (1LL * A * power) % MOD;
}


