#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void reverseInKGroup(queue<int> &q,int k,int count){
    //for n>k
    if(count>=k){
        //in this case we reverse the k element group
        stack<int> s;
        //fetch k element of queue and push into stack
        for(int i=0;i<k;i++){
           int element= q.front();
           q.pop();
           s.push(element);
        }
        //fetch k element of stack and push into queue
        for(int i=0;i<k;i++){
            int element=s.top();
            s.pop();
            q.push(element);
        }
                reverseInKGroup(q, k, count - k);
    }
    else{
        //when count is less than k 
        //direct take the queue and push it into queue rear
        for(int i=0;i<count;i++){
        int element=q.front();
        q.pop();
        q.push(element);
        }

    }
}
int main(){
     queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);
    q.push(110);
    int k = 3;
    // count->tracks the number of elements to reverse
    int count = q.size();

    reverseInKGroup(q,k,count);

    // printing all elements
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}