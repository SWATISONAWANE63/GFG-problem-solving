class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int, vector<int>,greater<int>> minHeap;
        for(int num:arr){
            minHeap.push(num);
        }
        int sum=0;
        while(minHeap.size()>1){
            int first=minHeap.top();
            minHeap.pop();
            int second=minHeap.top();
            minHeap.pop();
            int localSum=first+second;
            sum+=localSum;
            minHeap.push(localSum);
        }
        return sum;
    }
};