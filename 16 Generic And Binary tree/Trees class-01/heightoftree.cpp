#include<iostream>
#include<queue>
using namespace std;
//leetcode:104 Maximum Depth of Binary Tree

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
    int maxDepth(TreeNode* root) {
        //base case
        if(root==NULL) return 0;

        //recusive call lga to left mai
        int leftheight=maxDepth(root->left);
        //recursive call lga to right mai
        int rightheight=maxDepth(root->right);
        int finalans=max(leftheight,rightheight);
        int totalheight=finalans+1;
        return totalheight;
        
    }
};