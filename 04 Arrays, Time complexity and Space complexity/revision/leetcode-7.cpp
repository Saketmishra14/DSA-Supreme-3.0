class Solution {
public:

    int solve(int x){

    if(x<=INT_MIN) return 0;
    bool isNegative=false;

    if(x<0){
        isNegative=true;
        x=-x;
    }
 
       //iss wle question mai negative value x ka handle nhi ho rha hai
      
         int ans=0;
        while(x>0){
            if(ans>INT_MAX/10) return 0;
           int digit=x%10;
            ans=ans*10+digit;
            x=x/10;
        }
        //use ternary operator
        return isNegative ? -ans:ans;
       
    }
    int reverse(int x) {
        return solve(x);
    }
};