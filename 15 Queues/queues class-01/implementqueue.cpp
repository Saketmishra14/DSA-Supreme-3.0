#include<iostream>
using namespace std;
class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        arr=new int[size];
        this->size=size;
        front=-1;
        rear=-1;
    }

    void push(int val){
        //for overflow
       if(rear==size-1){
        cout<<"queue overflow."<<endl;
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
    void pop(){
        if(front==-1 && rear==-1){
            cout<<"queue underflow"<<endl;
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
    int getrear(){
        if(rear==-1){
            cout<<"queue is empty";
        }
        else{
            
            return arr[rear];
        }
    }
    int getfront(){
        if(front==-1){
            cout<<"queue is empty"<<endl;
            
        }
        else{
            return arr[front];
        }

    }
    int getsize(){
        if(front==-1 && rear==-1){
            return 0;
        }
        //number of element in a queue

       else return rear-front+1;
    }
    bool isempty(){
        if(front==-1 && rear==-1){
            return true;
        }
        else{
             return false;
        }
    }
    
};
int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(60);
    q.push(60);
    cout<<q.getfront()<<endl;
    cout<<q.getrear()<<endl;
    cout<<q.getsize()<<endl;
    q.push(10);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout<<q.isempty()<<endl;
    q.push(20);
    cout<<q.isempty()<<endl;
    cout<<q.getrear()<<endl;
    return 0;
}