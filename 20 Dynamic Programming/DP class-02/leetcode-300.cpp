class Solution {
public:
      

      //solve using recursion
    int Solve(vector<int> &nums,int lastindex,int i){
        //base case
        if(i>=nums.size()) return 0;

        int curr=nums[i];
        int inc=0;
        //include tbhi kr skte jb curr element last element sai bda ho
        if(lastindex==-1 || curr>nums[lastindex]){
            inc=1+Solve(nums,i,i+1);
        }
        int exc=0+Solve(nums,lastindex,i+1);
        return max(inc,exc);
    }
    
    //Top-Down approach solve using dp approach
    int SolveMem(vector<int> &nums,int lastindex,int i, vector<vector<int>> &dp){
        //base case
         if(i>=nums.size()) return 0;

        //  step-3.check if ans already exist
        if(dp[lastindex+1][i]!=-1) return dp[lastindex+1][i];


         int curr=nums[i];
        int inc=0;
        //include tbhi kr skte jb curr element last element sai bda ho
        if(lastindex==-1 || curr>nums[lastindex]){
            inc=1+SolveMem(nums,i,i+1,dp);
        }
        int exc=0+SolveMem(nums,lastindex,i+1,dp);
        //step->2. store and return ans in dp array
        dp[lastindex+1][i]=max(inc,exc);
        return dp[lastindex+1][i];         
       
    }

        // bottom-up
    int solveTab(vector<int>&arr, int curr, int prev){
        int n = arr.size();
        vector<vector<int> > dp(n+1, vector<int>(n+1,0));
        
        // rec ranges:
        // curr-> 0 to n
        // prev-> -1 to curr
        // reverse it and apply loop
        for(int curr = n-1; curr >= 0; curr--){
            for(int prev = curr - 1; prev >= -1; prev--){
                int inc = 0;
                if(prev == -1 || arr[curr] > arr[prev]){
                    inc = 1 + dp[curr+1][curr+1];
                }
                int exc = 0 + dp[curr+1][prev+1];
                dp[curr][prev+1] = max(inc,exc);
            }
        }
        // return dp[0][-1+1];
        return dp[0][0];
    }

    
    int lengthOfLIS(vector<int>& arr) {
        int lastindex=-1;
        int i=0;
      //  int n=nums.size();
      //  Step-:1. create and pass 2d array
    //  vector<vector<int>> dp(n+2,vector<int> (n+1,-1));

        return solveTab(arr,lastindex,i);   
    }
};