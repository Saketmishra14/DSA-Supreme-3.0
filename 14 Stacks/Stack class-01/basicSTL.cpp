#include<iostream>
#include<stack>
using namespace std;
int main(){
    //creation 
    stack<int> s;

    //Insertion
    s.push(23);
    s.push(20);
    s.push(50);
    cout<<s.size()<<endl;
    //check empty or not
    cout<<s.empty()<<endl;
    //peak 
    cout<<s.top()<<endl;
    //removal 
    s.pop();
    cout<<s.top()<<endl;

    return 0;
}