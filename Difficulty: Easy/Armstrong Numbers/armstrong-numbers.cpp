// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int original=n;
        int sum=0;
        while(n>0){
            int ans=n%10;
            sum+= ans*ans*ans;
            n=n/10;
            }
         if(sum==original){
             return true;
         }
         return false;
    }
};