//leetcode -:44. Wildcard Matching

class Solution {
public:
    bool solveuseRec(string &s,string &p,int i,int j){

        //base case 
        //sare character match hogye
        if(i==s.length() && j==p.length()) return true;
        //pattern khtm ho gya or string  mai abhi character hai hi
        if(j==p.length()) return false;
        //string khtm hogya lkin,patter nhi 
        if(i==s.length()){
            for(int k=j;k<p.length();k++){
                //agar bache hue character '*' hai to true,nhi to false
                if(p[k]!='*') return false;
            }
            return true;
        }
        //aab yha pai logic aayega 
        //match ya nhi to not match
        if(p[j]=='?' || s[i] ==p[j]){
            return solveuseRec(s,p,i+1,j+1);
        }
        else if(p[j]=='*'){
            //yha '*' empty string bhi bn skta h, ya phir kuch bhi character bn skta hai
            return solveuseRec(s,p,i+1,j) || solveuseRec(s,p,i,j+1);
        }
        else{
            return false;
        }
    }
    
    //solve tle problem using 2d dp
    bool solveuseMem(string &s,string &p,int i,int j,vector<vector<int>> &dp){
         if(i==s.length() && j==p.length()) return true;
        if(j==p.length()) return false;
        if(i==s.length()){
            for(int k=j;k<p.length();k++){
                if(p[k]!='*') return false;
            }
            return true;
        }

        //step-:3. check if ans exist or not
        if(dp[i][j]!=-1) return dp[i][j];

        //main logic 
        //step-:2. ans ko dp mai store kro and return 
       bool ans;
        if(p[j]=='?' || s[i] ==p[j]){
           ans= solveuseMem(s,p,i+1,j+1,dp);
        }
        else if(p[j]=='*'){
            ans= solveuseMem(s,p,i+1,j,dp) || solveuseMem(s,p,i,j+1,dp);
        }
        else{
           ans= false;
        }
        dp[i][j]=ans;
        return dp[i][j];
    }

    //solve using tabulation ,
    bool solveuseTab(string s, string p,int m, int n){
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        dp[m][n]=true; 
        for(int col=0;col<n;col++){
            bool flag=true;
             for(int k=col;k<p.length();k++){
                if(p[k]!='*'){
                    flag =false;
                    break;
                } 
            }
            dp[m][col]=flag;
        }
        for(int i=m-1;i>=0;i--){
            for(int j=n;j>=0;j--){
         bool ans;
        if(p[j]=='?' || s[i] ==p[j]){
           ans= dp[i+1][j+1];
        }
        else if(p[j]=='*'){
            ans= dp[i+1][j] || dp[i][j+1];
        }
        else{
           ans= false;
        }
        dp[i][j]=ans;
            }
        }
        return dp[0][0];

    }
    bool isMatch(string s, string p) {
        //step-1. create 2d and pass
        int m=s.length();
        int n=p.length();
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        int ans=solveuseTab(s,p,m,n);
        return ans;
        
    }
};