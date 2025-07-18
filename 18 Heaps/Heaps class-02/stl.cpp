#include<iostream>
#include<queue>
using namespace std;
int main(){
    //creation 
    priority_queue<int> heap;
    //by default-> max heap
    priority_queue<int> heap1;
    //insertion 
    heap1.push(2000);
    heap.push(10);
    heap.push(200);
    heap.push(30);
    heap.push(40);
    heap.push(50);
    //checking top
  //  cout<<heap.top()<<endl;
    //deletion 
    heap.pop();
  //  cout<<heap.top()<<endl;
    //get size
  //  cout<<heap.size()<<endl;
    //swap heap to heap1;
    swap(heap,heap1);
  //  cout<<heap1.top()<<endl;

  //min heap
  priority_queue<int, vector<int>,greater<int>> minimumheap;
  minimumheap.push(20);




    


    return 0;
}