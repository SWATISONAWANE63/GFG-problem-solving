class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int sum=0;
        int maxSum=0;
        int n=arr.size();
        for(int i=0; i<k; i++){
            sum+=arr[i];
        }
        maxSum=sum;
        for(int i=k; i<n; i++){
            sum+=arr[i];
            sum -= arr[i - k];
              maxSum=max(sum,maxSum);
            
        }
       return maxSum;
      
    }
};