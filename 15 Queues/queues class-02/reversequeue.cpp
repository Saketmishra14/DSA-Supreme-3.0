#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reversequeue(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
        int element=q.front();
        q.pop();
        s.push(element);
    }

    while(!s.empty()){
        int element=s.top();
        s.pop();
        q.push(element);
    }

}
void recursionreverse(queue<int> &q){
    //base case
    if(q.empty()) return ;
    //1 case mai solve krunga 
    int frontelement=q.front();
    q.pop();
    //baki recursion sambhalega
    recursionreverse(q);

    //backtracking ka use kro 
    q.push(frontelement);
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    recursionreverse(q);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    
}