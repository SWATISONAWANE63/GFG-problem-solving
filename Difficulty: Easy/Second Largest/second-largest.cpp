class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        if(n<2) return -1;
        int firstMax=INT_MIN;
        int secondMax=INT_MIN;
        for(int i=0; i<n; i++){
            if(arr[i]>firstMax){
                firstMax=arr[i];
            }
        }
        for(int i=0; i<n;i++){
            if(arr[i]!=firstMax && arr[i]>secondMax){
                secondMax=arr[i];
            }
        }
        if(secondMax==INT_MIN) return -1;
        return secondMax;
    }
};