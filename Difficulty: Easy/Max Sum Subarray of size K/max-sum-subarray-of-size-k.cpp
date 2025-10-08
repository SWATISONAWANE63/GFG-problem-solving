class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int sum=0;
        for(int i=0; i<k;i++)
        sum+=arr[i];
        int maxSum=sum;
        int l=0;
        int r=k;
        
        while(r<n){
          sum=sum-arr[l]+arr[r];
          maxSum=max(maxSum,sum);
            l++;
            r++;
          
        }
        return maxSum;
    }
};