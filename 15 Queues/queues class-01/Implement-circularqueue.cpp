#include<iostream>
#include<queue>
using namespace std;
class CircularQueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    CircularQueue(int size){
        arr=new int[size];
        this->size=size;
        front=-1;
        rear=-1;
    }

    void push(int val){
        //1.overflow,2.first element,3.circular flow,4.normal flow
        if((rear==size-1 && front==0) || (rear=front-1)){
            cout<<"overflow";
            return ;
        }
        else if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[rear]=val;
        }
        else if(rear==size-1 && front!=0){
            rear=0;
            arr[rear]=val;
        }
        else{
            rear++;
            arr[rear]=val;
        }


    }
    void pop(){
        //1.underflow,2.one element,3.circular nature,4.normal flow
        if(front==-1 && rear==-1){
            cout<<"underflow";
            return ;
        }
       else if(front==rear){
        arr[front]=-1;
        front=-1;
        rear=-1;
       }
       else if(front==size-1){
        arr[front]=-1;
        front=0;
       }
       else{
        arr[front]=-1;
        front++;
       }
    }
    bool isempty(){
        if(front==-1 && rear==-1){
            return true;
        }
        else{
            return false;
        }
    }
     int getSize(){
            if(front == -1 && rear == -1){
                return 0;
            }
            // normal
            else if(rear >= front) return rear-front+1;
            // circular case
            else return size-front+rear+1;
        
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl; 
    }
    int getfront(){
        if(front==-1) cout<<"queue is empty";
        else{
            return arr[front];
        }

    }
};
int main(){
     CircularQueue q(5);
    q.push(10);
    q.print();
    q.push(20);
    q.print();
    q.push(30);
    q.print();
    q.push(40);
    q.print();
    q.push(50);
    q.print();
    q.push(60);
    q.print();

    q.pop();
    q.pop();
    q.print();

    q.push(100);
    q.print();

    cout<<q.getSize()<<endl;
    cout<<q.isempty()<<endl;
    cout<<q.getfront()<<endl;
    return 0;
}