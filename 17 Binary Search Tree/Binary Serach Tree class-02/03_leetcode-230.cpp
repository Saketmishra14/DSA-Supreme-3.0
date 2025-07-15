//leetcode-> 230 Kth smallest element in bst
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

      void storeInorder(TreeNode* root,vector<int> &inorder){
        if(root==NULL) return ;
        //LNR
        storeInorder(root->left,inorder);
        inorder.push_back(root->val);
        storeInorder(root->right,inorder);
      }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> inorder;
        storeInorder(root,inorder);
        return inorder[k-1];
        
    }
};

//second approach to solve this question using recursion
//leetcode-> 230 Kth smallest element in bst


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
       
       void Solve(TreeNode* root,int &k,TreeNode* &ans){
        if(root==NULL) return ;
        //LNR
        //L
        Solve(root->left,k,ans);
        //N
        k--;
        if(k==0) {
            ans=root;
        }
        //R 
        Solve(root->right,k,ans);

       }
     
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* ans;
        Solve(root,k,ans);
        return ans->val;   
    }
};
