//leetcode -:724. Find Pivot Index

class Solution {
public:

//brute force approach to solve this problem
    int bruteforce(vector<int>& nums){
        for(int i=0;i<nums.size();i++){
        int lefts=0;
        int rights=0;
            
            //find left sum excluding i index
            for(int l=0;l<i;l++){
                lefts=lefts+nums[l];
            }

            //find right sum excluding i index
            for(int r=i+1;r<nums.size();r++){
                rights +=nums[r];
            }

            if(lefts==rights) return i;
        }
       //Not found 
       return -1; 

    }


    int pivotindex(vector<int>& nums) {
        // calculate total
        int total = accumulate(nums.begin(), nums.end(), 0);
        int left_sum = 0;

        for (int i = 0; i < nums.size(); ++i) {
            int right_sum = total - left_sum - nums[i];
            if (left_sum == right_sum) {
                return i;
            }
            left_sum += nums[i];
        }
        return -1;
    }

    
    int pivotIndex(vector<int>& nums) {
        return bruteforce(nums);
    }
};