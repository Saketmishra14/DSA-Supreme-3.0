class Solution {
public:

    int naive(vector<int>& nums){
         //brute force approach 
        int ans=INT_MIN;
       
        for(int i=0;i<nums.size();i++){
             int sum=0;
            for(int j=i;j<nums.size();j++){
                sum=sum+nums[j];
                ans=max(ans,sum);
            }
        }
        return ans;
    }

    int Kadanealgo(vector<int>& nums){
        int sum=0;
        int ans=INT_MIN;

        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            ans=max(sum,ans);
            if(sum<0) sum=0;
        }
        return ans;
    }
    int maxSubArray(vector<int>& nums) {
       
        return Kadanealgo(nums);
    }
};