class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        // add code here.
        int A=a.size();
        int B=b.size();
        for(int i=0; i<B; i++){
            if(a[i]!=b[i]){
                return i;
            }
        }
        return A-1;
    }
};