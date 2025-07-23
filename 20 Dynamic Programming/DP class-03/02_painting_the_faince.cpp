class Solution {
  public:
  
  //solve using recursion give -:TLE
  int solverec(int n,int k){
      //base case
      if(n==1) return k;
      if(n==2) return (k+k*(k-1));
      
      int ans=(k-1) * (solverec(n-1,k)+solverec(n-2,k));
      
      return ans;
  }
  
  //solve TLE problem using dp 
  int solveMem(int n,int k,vector<int> &dp){
       //base case
      if(n==1) return k;
      if(n==2) return (k+k*(k-1));
     // step->3.check if ans exist 
     if(dp[n]!=-1) return dp[n];
      
      
      //step->2.store ans in dp
      
      dp[n]=(k-1) * (solveMem(n-1,k,dp)+solveMem(n-2,k,dp));
      
      return dp[n];
      
  }
  
  //solve using tabulation 
  int solveTab(int n,int k){
      //base case 
      vector<int> dp(n+1,0);
      dp[1]=k;
      dp[2]=(k+k*(k-1));
      
      for(int i=3;i<=n;i++){
          int ans= (k - 1) * (dp[i - 1] + dp[i - 2]);
          dp[i]=ans;
      }
      return dp[n];
  }
  
    int countWays(int n, int k) {
        // code here
        //step-: create 1d array and pass
      //  vector<int> dp(n+1,-1);
      return  solveTab(n,k);
        
        
    }
};