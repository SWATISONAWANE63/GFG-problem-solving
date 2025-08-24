#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    const int MOD = 1000000007;

    // Function to compute GCD
    long long gcd(long long a, long long b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    // Function to compute modular inverse using Fermat's Little Theorem
    long long modInverse(long long a) {
        long long res = 1;
        long long power = MOD - 2;
        while (power > 0) {
            if (power % 2 == 1)
                res = (res * a) % MOD;
            a = (a * a) % MOD;
            power /= 2;
        }
        return res;
    }

    // Main function to compute LCM of array modulo MOD
    int lcmOfArray(int N, int A[]) {
        long long lcm = A[0];
        for (int i = 1; i < N; i++) {
            long long current = A[i];
            long long g = gcd(lcm, current);
            long long inv = modInverse(g);
            lcm = ((lcm % MOD) * (current % MOD)) % MOD;
            lcm = (lcm * inv) % MOD;
        }
        return lcm;
    }
};
