//leetcode -:10.regular expression matching

class Solution {
public:
    bool solveRec(string&s, string&p, int i, int j){
        // base cases
        if(i==s.length() && j==p.length()) return true;
        if(j==p.length()) return false;

        bool currMatch = (i<s.length()) && (p[j] == '.' || s[i] == p[j]);

        if(j+1 < p.length() && p[j+1] == '*'){
            bool emptyCase = solveRec(s,p,i,j+2);
            bool precElementCase = currMatch && solveRec(s,p,i+1,j);
            return emptyCase || precElementCase;
        }
        else if(currMatch){
            return solveRec(s,p,i+1,j+1);
        }
        else{
            return false;
        }
    }



     bool isMatch(string s, string p) {
         return solveRec(s,p,0,0);

        int m = s.length();
        int n = p.length();
        // vector<vector<int> > dp(m+1, vector<int>(n+1,-1));
        // return solveMem(s,p,m,n,dp);

        // return solveTab(s,p,m,n);
      //  return solveTabSO(s,p,m,n);
    }
};