//leetcode 1047: remove all adjacent duplicates in String
#include<cstring>
using namespace std;
#include<iostream>
class Solution {
    public:
        string removeDuplicates(string s) {
            string ans="";
            int n=s.length();
            for(int i=0;i<n;i++){
                char currentchar=s[i];
                if(ans.empty()){
                    ans.push_back(currentchar);
                }
                else if(currentchar==ans.back()){
                    ans.pop_back();
                }
                else{
                    ans.push_back(currentchar);
                }
            }
            return ans;
            
        }
    };