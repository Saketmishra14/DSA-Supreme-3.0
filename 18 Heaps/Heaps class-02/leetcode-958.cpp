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

    bool solve(TreeNode* root){
        queue<TreeNode*>pq;
        pq.push(root);

        bool nullfound=false;
        while(!pq.empty()){
            TreeNode* element=pq.front();
            pq.pop();
            if(element==NULL) {
                nullfound=true;
            }
            else{
          // front is a valid node
          if(nullfound) {
         // not a cbt
          return false;
          }
          else{
            // may be a cbt, continue processing
            pq.push(element->left);
            pq.push(element->right);
          }
            }

        }
        return true;
    }
    bool isCompleteTree(TreeNode* root) {
        //level order
        bool ans=solve(root);
        return ans;
    }
};