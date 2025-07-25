class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        long long i=1;
        if(n==1 || n==0) return n;
        for( ; i*i<=n; i++){
            if(i*i==n){
                return i;
            }
        }
        return i-1;
    }
};