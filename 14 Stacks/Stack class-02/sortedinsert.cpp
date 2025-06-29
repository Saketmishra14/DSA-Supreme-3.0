#include<iostream>
#include<stack>
using namespace std;
void Sortedinsert(stack<int> &s,int val){
    //base case
    if(! s.empty() && val>s.top()){
        s.push(val);
        return ;
    }
     else{
        s.push(val);
        return;
    }
    int topE=s.top();
    s.pop();
    Sortedinsert(s,val);

    //backtrack
    s.push(topE);

}
int main(){
     stack<int> s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);
    int val=23;
    Sortedinsert(s,val);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}