class Solution {
  public:
    bool armstrongNumber(int n) {
        int original = n;     // store original number
        int finalAns = 0;

        while (n != 0) {
            int digit = n % 10;
            finalAns += digit * digit * digit;
            n = n / 10;
        }

        return finalAns == original;
    }
};
