#include<iostream>
#include<unordered_map>
using namespace std;



// User function Template for C++

class Solution {
  public:
  
  string twoscomplement(string &bi){
      int c=1;
      for(int i=bi.size()-1;i>=0;i--){
         int bit = bi[i] - '0';            // Convert char to int
          int sum=bit+c;
           bi[i]=sum%2+'0';
           c=sum/2;
           
      }
      if (c)
        bi = bi;
        
        return bi;
  }
  
    string onescomplement(string &bi){
        for(int i=0;i<bi.size();i++){
            if(bi[i]=='0') {
                bi[i]='1';
            }
            else{
                bi[i]='0';
            }
        }
        return bi;
    }
    string complement(string bi) {
        // code here
        onescomplement(bi);
         return twoscomplement(bi);
        
        
        
    }
};