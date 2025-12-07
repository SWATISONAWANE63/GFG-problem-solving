class Solution {
  public:
    void print_divisors(int n) {
        vector<int> big;

        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                cout << i << " ";   // smaller divisor

                if (i != n / i) {
                    big.push_back(n / i);  // larger divisor
                }
            }
        }

        reverse(big.begin(), big.end());
        for (int x : big) cout << x << " ";
    }
};
