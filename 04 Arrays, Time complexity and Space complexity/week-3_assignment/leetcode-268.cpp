class Solution {
public:
//method 1-sorting method
    int Solve(vector<int>& nums){
         //sort array first 
        sort(nums.begin(),nums.end());
        int n=nums.size();
        //travese array [0,nums.size()]
        for(int i=0;i<n;i++){
            //missing element found
            if(nums[i]!=i) return i;
        }
        return n;
    }
    //method 2- xorr method 

    int Xorr(vector<int>& nums){
        int ans=0;
    
    //xorr all value for array
        for(int i=0;i<nums.size();i++){
            ans ^=nums[i];
        }
        
        //xorr from [0,nums.size()]
        for(int i=0;i<=nums.size();i++){
            ans ^=i;
        }
        return ans;
    }
    int missingNumber(vector<int>& nums) {
       return Xorr(nums);
    }
};