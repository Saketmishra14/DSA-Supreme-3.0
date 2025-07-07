#include<iostream>
using namespace std;
//leetcode :543 
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
int getheight(TreeNode* root){
    if(root==NULL) return 0;

    int left=getheight(root->left);
    int right=getheight(root->right);
    int finalans=max(left,right);
    int totalheight=finalans+1;
    return totalheight;
}

    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;

        int leftsideans=diameterOfBinaryTree(root->left);
        int rightsideans=diameterOfBinaryTree(root->right);
        int leftrightans=getheight(root->left)+getheight(root->right);

        int maxdiameter=max(leftsideans,max(rightsideans,leftrightans));
        return maxdiameter;
    }
};