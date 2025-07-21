class Solution {
public:

     int solveusingrecursion(int n){
        //base case
        if(n==0) return 0;
        if(n==1) return 1;

        //1 case mai solve krunga 
         return solveusingrecursion(n-1)+solveusingrecursion(n-2);

     }

     //Top-Down approach
     int solveusedp(int n,vector<int> &dp){
        //base case
       if(n<=1) return n;
        //step->3. base case ke bad check if ans already exist or not
        if(dp[n]!=-1) return dp[n];

        //step->2.dp array mai ans store kro and return kro
        dp[n]=solveusedp(n-1,dp)+solveusedp(n-2,dp);
         return dp[n];
     }

        //Bottom to UP approach or tabulation approach
      int solveUsingTabulation(int n){
        // step 1: create dp array: 1d dp
        vector<int> dp(n+1,-1);
        // step 2:analyse base cases and update dp array
        dp[0] = 0;
        //agar n=0 hoga to 1 hi dp mai size hoga tb dp[1]=1 valid nhi hoga is liye ye base case lgana hai
        if(n == 0){
            return 0;
        }
        dp[1] = 1;
        // step 3: check parameter and reverse it and run a loop
        // recursion:n->0
        // reverse: 0->n
        for(int i = 2; i <= n; i++){
            // copy paste
            dp[i] = dp[i-1] + dp[i-2];
        }
        // answer return
        return dp[n]; //recursion me jo pass kia tha wo dalna hai
    }

     //3. Space Optimization =bootom-up pai pattern find kro
    int solveusingoptimization(int n){

    if(n<=1) return n;

        int prev=0;
        int curr=1;

        for(int i=2;i<=n;i++){
             int ans=prev+curr;
             prev=curr;
             curr=ans;
        }
        return curr;
    }
    
    int fib(int n) {

        //step-:1. create dp array and pass in function
        vector<int> dp(n+1,-1);
        int ans=solveusedp(n,dp);
        return ans;
        
    }
};