class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        int ans=min(a,b);
        int gcd=1;
        for(int i=1; i<=ans; i++){
            if(a%i==0 && b%i==0){
                gcd=i;
            }
        }
        int lcm=(a*b)/gcd;
        return {lcm,gcd};
    }
};