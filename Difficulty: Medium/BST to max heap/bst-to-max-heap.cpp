// User function Template for C++

/*struct Node {
    int data;
    Node *left, *right;
};*/

class Solution {
  public:
  void inOrder(Node*root, vector<int>&arr){
      if(!root)return;
      inOrder(root->left,arr);
      arr.push_back(root->data);
      inOrder(root->right,arr);
  }
  void postOrder(Node*root, vector<int>&arr, int &index){
      if(!root)return;
      postOrder(root->left,arr,index);
      postOrder(root->right,arr,index);
      root->data=arr[index++];
  }
    void convertToMaxHeapUtil(Node* root) {
        // Your code goes here
        vector<int>arr;
        inOrder(root,arr);
        int index=0;
        postOrder(root,arr,index);
    }
};
