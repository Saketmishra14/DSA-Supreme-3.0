// leetcode 45. Jump Game-2
#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
    void solve(vector<int>& nums, int i,int&ans,int step){
        //base case
        if(i==nums.size() -1){
           ans= min(ans,step);
           return;
        }
        if(i>=nums.size()) return;
    
       
        for(int jump=1;jump<=nums[i];jump++){
            solve(nums,i+jump,ans,step+1);
        }
        
    }
        int canJump(vector<int>& nums) {
            int ans;
         solve(nums,0,ans,0);
         return ans;
            
        }
    };