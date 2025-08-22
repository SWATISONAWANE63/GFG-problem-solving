class Solution {
  public:
    long long reversedBits(long long x) {
        // code here
        vector<int>bits(32,0);
        bitset<32>binary(x);
        for(int i=0; i<32; i++){
            bits[i]=binary[i];
        }
        reverse(bits.begin(), bits.end());
     long long result = 0;
    for (int i = 0; i < bits.size(); i++) {
        if (bits[i]) {
            result |= (1LL << i);
        }
    }
    return result;

        
    }
};