 class solution{
    public:
      int Solve(vector<int>&nums,int index,int size){

    //base case
    if(index>=size){
        return 0;
    }
    //Include recursive call
    int IncludeAmoun=nums[index]+Solve(nums,index+2,size);

    //Exclude recursive call
    int ExcludeAmoun=0+Solve(nums,index+1,size);

    return max(IncludeAmoun,ExcludeAmoun);

}
     //top-down approach -using dp

    int SolveMemo(vector<int> &nums,int i,vector<int> &dp){
        //base case
        if(i>=nums.size()) return 0;
        //step->3. check if ans already exist
        if(dp[i]!=-1){
            return dp[i];
        }
        //ek case mai solve krunga 
       // step->2.store and return ans in dp array
       int includeans=nums[i]+SolveMemo(nums,i+2,dp);
       int excludeans=0+SolveMemo(nums,i+1,dp);
       dp[i]=max(includeans,excludeans);
       return dp[i];
    }
     //bootom -up approach
    int SolveusingTab(vector<int> nums){
        int n=nums.size();
        //step->1. create a dp array
        vector<int> dp(n+5,0);
        //base case
        dp[n]=0;
        dp[n+1]=0;

        for(int i=n-1;i>=0;i--){
             // step->2.store and return ans in dp array
       int includeans=nums[i]+dp[i+2];
       int excludeans=0+dp[i+1];
       dp[i]=max(includeans,excludeans);
        }
        return dp[0];
    }

    
    //space optimization code
     int SolveusingTabSO(vector<int> nums){
        int n=nums.size();
       int next1=0;
       int next2=0;
        for(int i=n-1;i>=0;i--){
             // step->2.store and return ans in dp array
       int includeans=nums[i]+next2;
       int excludeans=0+next1;
       
       int curr=max(includeans,excludeans);
       //shifting ye bhul jate hai
       next2=next1;
       next1=curr;
        }
        return next1;
    }

    
    int rob(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        //step-1. crate and pass dp array
        vector<int> dp(n+1,-1);
        int ans=SolveMemo(nums,i,dp);
      return ans;
    }
};