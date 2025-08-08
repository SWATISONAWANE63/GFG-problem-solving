// User function Template for C++

class Solution {
  public:
  void heapfiy(vector<int>&ans,int n,int i){
      int largest=i;
      int left=2*i+1;
      int right=2*i+2;
      if(left<n && ans[left]>ans[largest]){
         largest=left;
      }
      if(right<n && ans[right]>ans[largest]){
        largest=right;
      }
      if(largest!=i){
          swap(ans[largest],ans[i]);
          heapfiy(ans,n,largest);
      }
      
  }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        vector<int>ans;
        for(auto num: a){
            ans.push_back(num);
        }
        for(auto num :b){
            ans.push_back(num);
        }
        int size=ans.size();
        for(int i=size/2-1; i>=0; i--){
            heapfiy(ans,size,i);
        }
        return ans;
    }
};