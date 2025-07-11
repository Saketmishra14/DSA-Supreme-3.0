#include<iostream>
#include<vector>
using namespace std;
// gfg: right view

/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution {
  public:
  
  
       void Solve(Node *root,vector<int> &ans,int level){
           if(root==NULL) return ;
           if(level==ans.size()){
               ans.push_back(root->data);
           }
           Solve(root->right,ans,level+1);
           Solve(root->left,ans,level+1);
       }
    // Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root) {
        // Your Code here
        vector<int> ans;
        int level=0;
        Solve(root,ans,level);
        return ans;
        
    }
};