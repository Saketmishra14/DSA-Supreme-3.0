class Solution {
public:
bool solve(vector<int>& nums,int target,int index){
    //base case
    if(target<0||index>=nums.size()) return false;
    if(target==0) return true;
     //include recursive call
     bool inc=solve(nums,target-nums[index],index+1);

     //exclude recursive call
     bool exc=solve(nums,target ,index+1);
     return inc||exc;
     
}

//solve TLE problem comes in recursion using dp to solve this problem

  bool SolveMem(vector<int>& nums,int target,int index,vector<vector<int>> &dp){

     //base case
    if(target<0||index>=nums.size()) return false;
    if(target==0) return true;
     //include recursive call
     if(dp[target][index]!=-1) return dp[target][index];
     bool inc=SolveMem(nums,target-nums[index],index+1,dp);

     //exclude recursive call
     bool exc=SolveMem(nums,target ,index+1,dp);
    //step-:2. store ans in dp and return 
     dp[target][index]=  inc||exc;
     return dp[target][index];

  }

  //use of tabulation method to solve the tle problem
  bool solveusingTab(vector<int>& nums,int target){
    //step-:1. create a 2d array
    int n=nums.size();
     vector<vector<bool>> dp(target+1,vector<bool> (n+1,false));

     //Step-:2. analyze base case
     for (int col=0;col<=n;col++){
        dp[0][col]=true;
     }

     //step-:3
     for(int t=1;t<=target;t++){
        for (int i=n-1;i>=0;i--){
            bool inc=0;
            if(t-nums[i]>=0){
            inc=dp[t-nums[i]][i+1];
            }

         //exclude recursive call
        bool exc=dp[t][i+1];
        dp[t][i]=inc||exc;

        }
     }
     return dp[target][0];
  }


    bool solveSO(vector<int>&nums, int target){
        int n = nums.size();
        vector<int>curr(target+1,0);
        vector<int>next(target+1,0);

        for(int col = 0; col<=nums.size();col++){
            next[0]= true;
        }

        for(int i = n-1; i>=0; i--){
            for(int t=1; t<=target;t++){
                bool inc = 0;
                if(t-nums[i]>=0) inc = next[t-nums[i]];
                bool exc = next[t];
                curr[t] = inc|| exc;
            }
            // shifting
            next = curr;
        }
        return next[target];
    }
    
    bool solveSO2(vector<int>&nums, int target){
        int n = nums.size();
        vector<int>curr(target+1,0);

        for(int col = 0; col<=nums.size();col++){
            curr[0]= true;
        }

        for(int i = n-1; i>=0; i--){
            for(int t=target; t>=1;t--){
                bool inc = 0;
                if(t-nums[i]>=0) inc = curr[t-nums[i]];
                bool exc = curr[t];
                curr[t] = inc|| exc;
            }
        }
        return curr[target];
    }
    

    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if((sum%2)!=0) return false;
        int target =sum>>1;
        int n=nums.size();


        //step-:1. create 2d array and pass
        // vector<vector<int>> dp(target+1,vector<int> (n+1,-1));
        // return SolveMem(nums,target,0,dp);

        return solveusingTab(nums,target);
        
    }
};