#include<iostream>
#include<stack>
using namespace std;
void Insertatbottom(stack<int> &s,int val){
    //base case
    if(s.empty()){
        s.push(val);
        return ;
    }
    //ek case mai solve krunga baki recursion smbhalega
    int top=s.top();
    s.pop();
     
    Insertatbottom(s,val);

    //backtrack
    s.push(top);
}
void Reversestack(stack<int> &s){
    //base case
    if(s.empty()) return;

    //ek case mai solve krunga baki recursion solve krega
    int tope=s.top();
    s.pop();
    Reversestack(s);
    Insertatbottom(s,tope);
}
void printstack(stack<int> &s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
   // printstack(s);
    Reversestack(s);
    printstack(s);

    return 0;
}