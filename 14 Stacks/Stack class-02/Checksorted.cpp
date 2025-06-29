#include<iostream>
#include<stack>
#include<limits.h>
using namespace std;

bool checksorted(stack<int> &s,int element1){
    //base case
    if(s.empty()){
        //iska mtlb stack pura compare ho chuka hai or sb data sorted hai 
        return true;
    }

    //1 case solve krna hai
    int element2=s.top();
    s.pop();
    if(element2<element1){
        //iska mtlb aage check kr skte hai
        bool ans=checksorted(s,element2);
        //backtrack
        s.push(element2);
        return  ans;
    }
    else{
        //iska mtlb hai aage check nhi krna hai stack sorted nhi hai
        return false;
    }

}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int element1=INT_MAX;
    cout<<checksorted(s,element1)<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    return 0;
}