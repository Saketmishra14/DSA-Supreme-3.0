#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
void Solve(vector<int>&nums,vector<vector<int>> &ans,int i){
    //base case
    if(i>=nums.size()){
        ans.push_back(nums);
        return ;
    }
    //recusive call
    for(int j=i;j<nums.size();j++){
        swap(nums[i],nums[j]);

        Solve(nums,ans,i+1);
        //back-track
        swap(nums[i],nums[j]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int i=0;
        Solve(nums,ans,i);
        return ans;
        
    }
};