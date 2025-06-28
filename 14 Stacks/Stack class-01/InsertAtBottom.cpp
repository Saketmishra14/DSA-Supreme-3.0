#include<iostream>
#include<stack>
using namespace std;
void Insertatbottom(stack<int> &s,int &value){
    //base case
    if(s.empty()){
        s.push(value);
        return;
    }
    //1-> case hm krenge baki recursion krega;
    int topelement=s.top();
    s.pop();

    //recursive call
    Insertatbottom(s,value);

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
    

    int value=5;
    Insertatbottom(s,value);
    

    //traverse in stack
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}