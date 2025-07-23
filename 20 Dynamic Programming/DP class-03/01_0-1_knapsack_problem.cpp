class Solution {
  public:
  
  //using recursion
  int Solveuserec( vector<int> &val, vector<int> &wt,int capacity,int index){
      
      //base case
      //singleitem
      if(index==0){
          if(wt[0]<=capacity){
              return val[0];
          }
          else{
              return 0;
          }
      }
      
      //use include/exclude pattern to solve this
      int incl=0;
      if(wt[index]<=capacity){
          incl=val[index]+Solveuserec(val,wt,capacity-wt[index],index-1);
      }
      
       int excl=Solveuserec(val,wt,capacity,index-1);
          
      int finalans=max(incl,excl);
      return finalans;
      
  }
   
   
  //2-D dp
  //use dp to solve the problem TLE
  
  int SolveuseMem(vector<int> &val, vector<int> &wt,int capacity,int index,  vector<vector<int>> &dp){
      
       if(index==0){
          if(wt[0]<=capacity){
              return val[0];
          }
          else{
              return 0;
          }
      }
      //step-:3 check if ans already exist 
      if(dp[capacity][index]!=-1){
          return dp[capacity][index];
      }
      
      //use include/exclude pattern to solve this
      int incl=0;
      if(wt[index]<=capacity){
          incl=val[index]+SolveuseMem(val,wt,capacity-wt[index],index-1,dp);
      }
      
       int excl=SolveuseMem(val,wt,capacity,index-1,dp);
       
       //step-:2 store final ans and return 
          
       dp[capacity][index]=max(incl,excl);
      return dp[capacity][index];
      
  }

  //down to up approach using tabulation
  int solveusingTab(vector<int> &val, vector<int> &wt,int capacity){
      int n=val.size();
      
       //step-:1 create 2d array and pass
      vector<vector<int>>dp(capacity+1,vector<int >(n,0));
      
      //step-:2 analyze base case
      for(int i=wt[0];i<=capacity;i++){
          dp[i][0]=val[0];
      }
      
      //step-:3 parameter->range ->reverse-> copy->paste logic of recursion
      //capacity=0 to capacity
      //index=0 to n-1
      for(int weight=0;weight<=capacity;weight++){
          for(int index=1;index<n;index++){
               int incl=0;
           if(wt[index]<=weight){
               incl=val[index]+dp[weight-wt[index]][index-1];
           }
      
           int excl=dp[weight][index-1];
          
           dp[weight][index]=max(incl,excl);
              
          }
          
      }
       return dp[capacity][n-1];
      
      
      
  }
  
  
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int capacity=W;
        int n=val.size();
        int index=n-1;
      //  return Solveuserec(val,wt,capacity,index);
      
      //step-:1 create 2d array and pass
      vector<vector<int>>dp(capacity+1,vector<int >(n,-1));
      return SolveuseMem(val,wt,capacity,index,dp);
      
    }
};