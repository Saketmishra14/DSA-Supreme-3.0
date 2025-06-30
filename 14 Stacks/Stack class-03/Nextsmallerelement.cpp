#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
void Nextsmallestelement(vector<int> &v,vector<int> &ans,stack<int> &s){
    //traverse array last index to 0th index
    int size=v.size();
    for(int i=size-1;i>=0;i--){
        int element=v[i];
        while(element<s.top()){
            //stack ke top mai bda value hai usko pop krdo
            s.pop();
        }
        //jb mai yha phucha tb stack ke top pai small element hai 
        //aab usko ans mai store krdo

        ans.push_back(s.top());
        //abb element ko stack mai push krdo
        s.push(element);
    }

}
int main(){
    vector<int> v;
    v.push_back(7);
    v.push_back(5);
    v.push_back(4);
    v.push_back(10);
    v.push_back(3);
    v.push_back(11);

    vector<int > ans;
    stack<int>s;
    s.push(-1);
    Nextsmallestelement(v,ans,s);
    reverse(ans.begin(),ans.end());
    for(auto i: ans){
        cout<<i<<" ";
    }
}