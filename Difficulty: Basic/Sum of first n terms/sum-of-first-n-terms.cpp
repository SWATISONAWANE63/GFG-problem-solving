// User function template for C++

class Solution {
  public:
    int sumOfSeries(int n) {
        // code here
        int sum=0,ans=0;
       for(int i=1; i<=n; i++){
           ans=i*i*i;
           sum+=ans;
       }
       return sum;
    }
};