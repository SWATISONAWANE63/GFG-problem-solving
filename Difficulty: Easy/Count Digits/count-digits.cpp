class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
      int original=n;
        int cnt=0;
        int ans=0;
        while(n>0){
            ans=n%10;
            if (ans != 0 && original % ans == 0) cnt++;
            n= n/10;
        }
        return cnt;
    }
};