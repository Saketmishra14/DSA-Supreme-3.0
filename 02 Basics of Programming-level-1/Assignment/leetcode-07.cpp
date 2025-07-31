//leetcode:7. Reverse Integer
#include<iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int n=0;
        while(x!=0){
             int digit=x%10;
             if((n>INT_MAX/10)||(n<INT_MIN/10)){
                return 0;
             }
            x=x/10;
            n=n*10+digit;
        }

        return n;
    }
};