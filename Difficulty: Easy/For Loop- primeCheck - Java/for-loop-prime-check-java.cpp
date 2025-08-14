class Solution {
  public:
    string isPrime(int n) {
        // code here
        if(n==1)return  "No";
        for(int i=2; i<n; i++){
            if(n%i==0) return "No";
        }
            return "Yes";
        
    }
};