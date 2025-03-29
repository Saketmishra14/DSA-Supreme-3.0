// leetcode 55. Jump Game
#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
    bool solve(vector<int>& nums, int i){
        //base case
        if(i==nums.size() -1) return true;
        if(i>=nums.size()) return false;
    
        bool recans=false;
        for(int jump=1;jump<=nums[i];jump++){
            recans=recans || solve(nums,i+jump);
        }
        return recans;
    }
        bool canJump(vector<int>& nums) {
            return solve(nums,0);
            
        }
    };