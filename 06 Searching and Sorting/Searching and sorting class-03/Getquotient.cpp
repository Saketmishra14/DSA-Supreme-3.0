//given two integers one is a dividend and the other is the divisor, we need to find the quotient when the dividend is divided by the divisor without the use of any "/" and "%" operators
//for example
//input: divident=10, divisor=2
//output:5
//explanation : 10.2 =5

#include<iostream>
using namespace std;
int getquotient(int dividend, int divisor){
      //search space: (-ve dividend)->(+ve dividend)
      int s=0;
      int e=dividend;
      int mid=s+((e-s)>>1);
      int ans=-1;
      while(s<=e){
        if(mid*divisor==dividend){
            return mid;
        }
        if((divisor*mid)<dividend){
            //store and compute 
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid+1;
        }
        mid=s+((e-s)>>1);
      }
      return ans;
}
int main(){
    int dividend=40;
    int divisor=4;
    int ans=getquotient(abs(dividend),abs(divisor));
    if((dividend<0 && divisor>0) || (dividend>0 && divisor<0)){
        ans=-ans;
    }
    cout<<"final ans:"<<ans;

    return 0;
}