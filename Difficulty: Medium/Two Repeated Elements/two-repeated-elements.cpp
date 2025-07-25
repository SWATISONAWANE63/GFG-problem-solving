class Solution {
  public:
    vector<int> twoRepeated(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>visited(n,0);
        vector<int>re;
        for(int i=0; i<n; i++){
            visited[arr[i]]++;
            if(visited[arr[i]]==2){
                re.push_back(arr[i]);
            }
        }
        return re;
    }
};
