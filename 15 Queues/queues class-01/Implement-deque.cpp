#include<iostream>
#include<deque>
using namespace std;
class Deque{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size){
        this->size=size;
        arr=new int[size];
        for(int i = 0; i < size; i++){
        arr[i] = 0;  // initialize all elements to 0
    }
        front=-1;
        rear=-1;
    }

    void push_rear(int val){
        //for overflow
       if(rear==size-1){
        cout<<" overflow."<<endl;
        return ;
       }
       //inserting first element
       else if(front==-1 && rear==-1){
        front++;
        rear++;
        arr[front]=val;
       }
       //normal flow
       else{
        rear++;
        arr[rear]=val;

    }
}

    void push_front(int val){
        if(front==0){
            cout<<"overflow"<<endl;
            return ;
        }
        else if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[front]=val;
        }
        else{
            front--;
            arr[front]=val;
        }
        
    }

    void pop_rear(){
        //deque is empty
        if(front==-1 && rear==-1){
            cout<<" underflow"<<endl;
        }
        //when one element is present
        else if(front==rear){
            front=-1;
            rear=-1;
        }
        //normal pop
        else{
            rear--;
        }
    }
    void pop_front(){
          if(front==-1 && rear==-1){
            cout<<"underflow"<<endl;
            return ;
        }
        else if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            front++;
        }

    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){
    Deque dq(5);
    dq.push_front(5);
    dq.push_rear(10);
    dq.print();
    dq.push_front(15);
    dq.push_rear(20);
    dq.push_front(25);
   dq.push_rear(30);
    dq.print();
   
  
     
    return 0;
}