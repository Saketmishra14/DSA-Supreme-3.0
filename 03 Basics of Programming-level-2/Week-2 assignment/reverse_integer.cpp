//leetcode:7. Reverse Integer
#include<iostream>
using namespace std;

class Solution {
public:

    int solve(int x){
       

     if(x<=INT_MIN) return 0;
       //iss wle question mai negative value x ka handle nhi ho rha hai
       bool isnegative=false;
       if(x<0){
        isnegative=true;
        x=-x;
       }
         int ans=0;
        while(x>0){
            if(ans>INT_MAX/10) return 0;
           int digit=x%10;
            ans=ans*10+digit;
            x=x/10;
        }
        //use ternary operator
        return isnegative ? -ans : ans;
    }
    int reverse(int x) {
        return solve(x);
    }
};