class Solution {
public:

   //solve using recursion

    int solveuseRecursion(string text1, string text2,int i,int j){
        //base case
        if(i>=text1.length() || j>=text2.length()) return 0;

        //ek case mai solve krunga baki recursion krega
        //match
        int ans=0;
        if(text1[i]==text2[j]) ans=1+ solveuseRecursion(text1,text2,i+1,j+1);
        
         //not match
        else ans=max(solveuseRecursion(text1,text2,i+1,j) ,solveuseRecursion(text1,text2,i,j+1));

        return ans;    
    }

    //solve TLE problem using 2D-dp

    int solveuseMem(string &text1,string &text2,int i,int j,vector<vector<int>> &dp){
       
        if(i>=text1.length() || j>=text2.length()) return 0;

        //step-:3. check if ans already exist
        if(dp[i][j]!=-1) return dp[i][j];

        int ans=0;
        if(text1[i]==text2[j]) ans=1+ solveuseMem(text1,text2,i+1,j+1,dp);
        
        else ans=max(solveuseMem(text1,text2,i+1,j,dp) ,solveuseMem(text1,text2,i,j+1,dp));

       // step-:2. store ans and return
       dp[i][j]=ans;

        return dp[i][j];   
    }

    //solve using tabulation
    int solveuseTab(string text1, string text2){

        vector<vector<int>> dp(text1.length()+1,vector<int>(text2.length()+1,0));

        for(int i=text1.length()-1;i>=0;i--){
        for(int j=text2.length()-1;j>=0;j--){
                 int ans=0;
                 if(text1[i]==text2[j]) ans=1+ dp[i+1][j+1];
        
         //not match
                 else ans=max(dp[i+1][j] ,dp[i][j+1]);

                 dp[i][j]=ans;

            }
        }
         return dp[0][0];
    }

     int solveTabSO(string text1, string text2){
        vector<int>prev(text2.length()+1,0);
        vector<int>curr(text2.length()+1,0);
        for(int i = text1.length()-1; i>=0;i--){
            for(int j = text2.length()-1; j>=0; j--){
                int ans = 0;
                if(text1[i] == text2[j]){
                    ans = 1 + prev[j+1];
                }
                else{ // no match
                    ans = 0 + max(prev[j],curr[j+1]);
                }
                curr[j] = ans;
            }
            // shifting
            prev = curr;
        }
        return prev[0];
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        int i=0;
        int j=0;
        //return solveuseRecursion(text1,text2,i,j);

        //step-:1. create 2d array and pass 
        vector<vector<int>> dp(text1.length()+1,vector<int>(text2.length()+1,-1));
        return solveuseTab(text1,text2);

        
    }
};