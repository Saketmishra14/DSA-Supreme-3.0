#include<iostream>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL ;

        //step->a
        //p and q are both in left side
        if(p->val < root->val && q->val < root->val){
            return lowestCommonAncestor(root->left,p,q);
        }

        //step-b
        //p and q are both in right side
        if(p->val>root->val && q->val>root->val){
            return lowestCommonAncestor(root->right,p,q); 
        }

        //step-c 
        //p and q are in left and right side

        //step- d
        //p in right side and q in left side
        return root;

        
    }
};