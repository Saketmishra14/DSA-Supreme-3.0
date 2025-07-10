#include<iostream>
using namespace std;
// leetcode 106. Construct Binary Tree from inorder and postorder Traversal
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
      void createmapping(unordered_map<int,int> &valmap,vector<int>& inorder){
        for(int i=0;i<inorder.size();i++){
            int element=inorder[i];
            int index=i;
            valmap[element]=index;
        }
      }

      TreeNode* createtree(unordered_map<int,int> &valmap,vector<int>& inorder, vector<int>& postorder,int &postindex,int inorderstart,int inorderend){
        if(postindex<0 ) return NULL;
        if(inorderstart>inorderend) return NULL;
        int element=postorder[postindex];
        postindex--;
         TreeNode* root = new TreeNode(element);
        int index = valmap[element];

        //right call
        root->right=createtree(valmap,inorder,postorder,postindex,index+1,inorderend);
        //left call
        root->left=createtree(valmap,inorder,postorder,postindex,inorderstart,index-1);

        return root;

      }

      
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postindex=postorder.size()-1;
        int inorderstart=0;
        int inorderend=inorder.size()-1;
        unordered_map<int,int> valmap;
        createmapping(valmap,inorder);
         
        TreeNode* root=createtree(valmap,inorder,postorder,postindex,inorderstart,inorderend);
        return root;
    }
};