//important question

#include<iostream>
#include<stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            //first check for open bracket 
            char ch=s[i];
            if(ch=='[' || ch=='{' || ch=='('){
                st.push(ch);
            }

            else{
                if(ch==']' && !st.empty() && st.top()=='['){
                    //bracket match
                    st.pop();
                }
                else if(ch==')' && !st.empty() && st.top()=='('){
                    //bracket match
                    st.pop();
                }
                else if(ch=='}' &&!st.empty() && st.top()=='{') {
                    //bracket match
                    st.pop();
                }
                else return false;
            }
        }
        if(st.size()==0){
            //valid string 
            return true;
        }
        else{
            return false;
        }
    }
};