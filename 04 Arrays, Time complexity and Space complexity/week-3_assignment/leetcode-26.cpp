//leetcode -:26. Remove Duplicates from Sorted Array

class Solution {
public:

    int solve(vector<int>& nums){
        int i=0;
        int j=1;
        while(j<nums.size()){
            if(nums[i]==nums[j]){
                j++;
            }
            else{
                i++;
                nums[i]=nums[j];
                j++;
            }
        }
        return i+1;  
    }
    int removeDuplicates(vector<int>& nums) {
        return solve(nums);    
    }
};