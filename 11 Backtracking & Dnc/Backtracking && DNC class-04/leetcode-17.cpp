#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
void Solve(string output,string digits,vector<string>&ans,unordered_map<char,string>&mapping,int i){
    //base case
    if(i>=digits.length()){
        if(output.length()>0){
              ans.push_back(output);
        }
        return;
    }
  char digit=digits[i];
  string mappedstring=mapping[digit];
    //1-case hm solve krenge baki recursion sambhalega
    for(char ch:mappedstring){
        output.push_back(ch);
        Solve(output,digits,ans,mapping,i+1);
        //backtrack
        output.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        unordered_map<char,string> mapping;
        mapping['2']="abc";
        mapping['3']="def";
        mapping['4']="ghi";
        mapping['5']="jkl";
        mapping['6']="mno";
        mapping['7']="pqrs";
        mapping['8']="tuv";
        mapping['9']="wxyz";
        int i=0;
        string output="";
        Solve(output,digits,ans,mapping,i);
        return ans;
        
    }
};