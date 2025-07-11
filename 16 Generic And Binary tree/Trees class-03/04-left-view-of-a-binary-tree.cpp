#include<iostream>
#include<vector>
using namespace std;
// gfg: left view of tree


/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
  
  
        void Solve(Node *root,vector<int> &ans,int level){
            if(root==NULL) return ;
            
            if(level==ans.size()){
                ans.push_back(root->data);
                
            }
            
            Solve(root->left,ans,level+1);
            Solve(root->right,ans,level+1);
            
        }
    vector<int> leftView(Node *root) {
        // code here
        vector<int> ans;
        int level=0;
        Solve(root,ans,level);
        return ans;
    }
};