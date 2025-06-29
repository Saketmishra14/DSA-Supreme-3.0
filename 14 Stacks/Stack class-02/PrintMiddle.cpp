#include<iostream>
#include<stack>
using namespace std;
void Middleelement(stack<int> &s,int &count){
    //base case
    
    if(count==0){
        cout<<s.top()<<endl;
        return;
    }
    //1-> case hm krenge baki recursion krega;
    int topelement=s.top();
    s.pop();
    count--;

    //recursive call
    Middleelement(s,count);

    //backtrack
    s.push(topelement);

}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    int count=s.size()/2;
    
   Middleelement(s,count);
    

    //traverse in stack
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}