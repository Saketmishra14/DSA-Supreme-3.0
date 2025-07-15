#include<iostream>
#include<queue>
#include<vector>
using namespace std;

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
      
      void InOrder(TreeNode* &root,vector<int> &arr){
        if(root==NULL) return ;
        //LNR
        InOrder(root->left,arr);
        arr.push_back(root->val);
        InOrder(root->right,arr);
      }
      bool CheckTwoSum(vector<int> &arr,int k){
        int n=arr.size();
        int s=0;
        int e=n-1;
        while(s<e){
                    int sum=sum=arr[s]+arr[e];
            if(sum==k) return true;
            else if(sum<k) s++;
            else{
                e--;
            }
        }
        return false;
      }
    bool findTarget(TreeNode* root, int k) {
        vector<int> arr;
        InOrder(root,arr);
        bool ans=CheckTwoSum(arr,k);
        return ans; 
    }
};