#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<char> s;
    string name="yashmishra";
    for(int i=0;i<name.length();i++){
        char ch=name[i];
        s.push(ch);
    }

    //now retrieve data from stack s;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}