#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    //Insertion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    //front 
    cout<<q.front()<<endl;

    //removal
    q.pop();
    cout<<q.front()<<endl;

    //size
    cout<<q.size()<<endl;

    //empty
    cout<<q.empty()<<endl;

    //rear element
    cout<<q.back()<<endl;

    deque<int> dq;
    dq.push_back(10);
    dq.push_front(20);
    dq.push_front(50);
    dq.push_front(30);
    dq.push_front(90);
    dq.push_back(4);
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
   cout<< dq.size()<<endl;
   dq.pop_back();

   //printing
   while(!q.empty()){
    cout<<q.front()<<"  "<<endl;
    q.pop();
   }
    return 0;
}