#include<iostream>
using namespace std;
//leetcode-: 108. Convert Sorted Array to Binary Search Tree
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
       TreeNode* Solve(vector<int> &nums,int s,int e){
        //edge case 
        if(s>e){
            return NULL;
        }
        //find root node spot 
        int mid=(s+e)/2;
        //create root node
        TreeNode* root=new TreeNode(nums[mid]);
        //baki ka kaam recursion krega
        //left call
        root->left=Solve(nums,s,mid-1);
        //right call
        root->right=Solve(nums,mid+1,e);

        return root;
       }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        TreeNode* root=Solve(nums,s,e);

        return root;   
    }
};