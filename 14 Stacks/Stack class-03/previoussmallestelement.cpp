#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
void Prevsmallestelement(vector<int> &v,vector<int> &ans,stack<int> &s){
    
    int size=v.size();
    for(int i=0;i<size;i++){
        int element=v[i];
        while(s.top()>element){
            
             s.pop();  
        }
         ans.push_back(s.top());
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
    Prevsmallestelement(v,ans,s);
    for(auto i: ans){
        cout<<i<<" ";
    }
}