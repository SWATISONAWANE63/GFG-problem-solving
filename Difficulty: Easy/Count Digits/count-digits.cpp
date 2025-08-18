class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int digit=0;
        int original=n;
    int ctn=0;
    while(n>0){
       digit=n%10;
           if(digit!=0&& original%digit==0){
              ctn++;
          }
      n=n/10;
    }
   
      return ctn;
    }
};