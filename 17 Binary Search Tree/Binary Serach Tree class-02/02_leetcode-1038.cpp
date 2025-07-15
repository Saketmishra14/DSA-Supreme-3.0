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
       void UpdateTree(TreeNode* &root,vector<int> inorder,int &index){
        if(root==NULL) return ;
        UpdateTree(root->left,inorder,index);
        root->val=inorder[index];
        index++;
        UpdateTree(root->right,inorder, index);
       }
    TreeNode* bstToGst(TreeNode* root) {
        //edge cases
        if(root==NULL) return NULL;
        if(root->left==NULL && root->right==NULL) return root;
        
        //step->1. store inorder 
        vector<int> inorder;
        storeInorder(root,inorder);

        //step->2. update inorder as per question requirement
        int n=inorder.size();
        for(int i=n-1;i>=0;i--){
            int currval=inorder[i];
            int nextval=0;
            if(i+1<n) {
                nextval=inorder[i+1];
            }
            int sum=currval+nextval;
            //yha replace krna hai
            inorder[i]=sum;
        }
        // step 3. update tree using inorder
        int index=0;
        UpdateTree(root,inorder,index);
        return root;
        
    }
};