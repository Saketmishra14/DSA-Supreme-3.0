class Solution {
public:
int Solve(vector<int> & coins,int amount){
    //base case 
    if(amount==0){
        return 0;
    }
    int minans=INT_MAX;
    for(int i=0;i<coins.size();i++){
        int coin=coins[i];
        if(coin<=amount){
            int reccall=Solve(coins,amount-coin);
            if(reccall!=INT_MAX){
                int coinused=1+reccall;

                minans=min(minans,coinused);
            }
        }
    }
    return minans;
}
 //approach to solve tle problem using dp
    int solveMem(vector<int> & coins,int amount,vector<int> &dp){
        //base case 
    if(amount==0){
        return 0;
    }

    //step->3.check if ans exist
    if(dp[amount]!=-1) return dp[amount];
    int minans=INT_MAX;
    for(int i=0;i<coins.size();i++){
        int coin=coins[i];
        if(coin<=amount){
            int reccall=solveMem(coins,amount-coin,dp);
            if(reccall!=INT_MAX){
                int coinused=1+reccall;
            //step->2. store and return ans in dp array
               minans=min(minans,coinused);
            }
        }

    }
     //step->2. store and return ans in dp array
     dp[amount]=minans;
    return dp[amount];

    }

    int solveTab(vector<int>&coins, int amount){
        vector<int> dp(amount+1,-1);
        dp[0] = 0;
        for(int amt = 1; amt <= amount; amt++){
            // logic
            int minCoinAns = INT_MAX;
            for(int i = 0; i < coins.size();i++){
                int coin = coins[i];
                if(coin <= amt){
                    int recursionAns = dp[amt-coin];
                    if(recursionAns!=INT_MAX){
                        int coinsUsed = 1 + recursionAns;
                        minCoinAns = min(minCoinAns,coinsUsed);
                    } 
                }
            }
            dp[amt] = minCoinAns;
        }
        return dp[amount];
    }

    int coinChange(vector<int>& coins, int amount) {

        //step-:1. create 1d array and pass it
        vector<int> dp(amount+1,-1);
        

        int ans=solveMem(coins,amount,dp);
        if(ans==INT_MAX){
            return -1;
        }
        else{
            return ans;
        }
        
    }
};