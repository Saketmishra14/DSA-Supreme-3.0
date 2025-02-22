#include<iostream>
#include<queue>
using namespace std;
int main(){
      //min heap -> minimum value is highest priority
      priority_queue<int,vector<int>,greater<int>> pq;
       //insertion
    pq.push(100);
    pq.push(50);
    pq.push(75);
    pq.push(20);

    //top()
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;

    //pop()
    pq.pop();
    cout<<pq.top();
    return 0;
}