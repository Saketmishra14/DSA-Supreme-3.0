class Solution {
public:

//solve using recursion
    int solveuseRec(int s,int e){
        //base case
        if(s>=e) return 0;
        
        int ans=INT_MAX;
        for(int i=s;i<e;i++){
            //lower call && higher call max value add 
            ans=min(ans,i+max(solveuseRec(s,i-1),solveuseRec(i+1,e)));
        }
        return ans;
    }

    //solve using recursion and add dp to solve tle problem
    int solveuseMem(int s,int e,vector<vector<int>>&dp){
          //base case
        if(s>=e) return 0;
        //step-:3. check if ans already exist 
        if(dp[s][e] !=-1) return dp[s][e];
        
        int ans=INT_MAX;
        for(int i=s;i<e;i++){
            //lower call && higher call max value add 
            ans=min(ans,i+max(solveuseMem(s,i-1,dp),solveuseMem(i+1,e,dp)));
        }
        dp[s][e]=ans;
        return dp[s][e];
    }

       int solveTab(int n){
        vector<vector<int> >dp(n+1, vector<int>(n+2,0));
        
        for(int s = n; s >= 1; s--){
            for(int e = 1; e <= n; e++){
                if(s>=e) continue;
                else{
                    int ans = INT_MAX;
                    for(int i = s; i < e; i++){
                        ans = min(ans, i + max(dp[s][i-1], dp[i+1][e]));
                    }
                    dp[s][e] = ans;
                }
            }
        }
        return dp[1][n];
    }

    int getMoneyAmount(int n) {
      //  int ans=solveuseRec(1,n);
        //step-:1. crate 2d dp and pass it
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        int s=1;

        return solveTab(n);  
    }
};