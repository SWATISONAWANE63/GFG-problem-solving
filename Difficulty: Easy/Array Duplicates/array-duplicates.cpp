class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        unordered_map<int,int>count;
        vector<int>ele;
        for( int num:arr){
            count[num]++;
            
        }
        for(auto& pair :count){
            if(pair.second>1){
                ele.push_back(pair.first);
            }
        }
        return ele;
    }
};