//leetcode:136. Single Number


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq_map;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            freq_map[num]=freq_map[num]+1;
        }

        int ans;
        for(auto it:freq_map){
            int val=it.second;
            if(val==1) ans=it.first;
        }
        return ans;
     
    }
};