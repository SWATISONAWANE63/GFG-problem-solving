// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int minVal=INT_MAX;
        int maxVal=INT_MIN;
        for(int i=0; i<arr.size();i++){
            if(arr[i]>maxVal){
                maxVal=arr[i];
            } if(arr[i]<minVal){
                minVal=arr[i];
            }      
        }
        return {minVal, maxVal};
        
    }
};