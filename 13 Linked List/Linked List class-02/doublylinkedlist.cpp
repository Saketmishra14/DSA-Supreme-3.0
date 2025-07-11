#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    Node* prev;
    int data;
    Node* next;
    Node(int value){
        data=value;
        prev=NULL;
        next=NULL;
    }
};
void insertattail(int value,Node* &head,Node*&tail){
    if(head==NULL && tail==NULL){
        Node* newnode=new Node(value);
        head=newnode;
        tail=newnode;
        return ;
    }
    else{
        Node* newnode=new Node(value);
        newnode->prev=tail;
        tail->next=newnode;
        tail=newnode;
    }

}
void insertathead(int value,Node* &head,Node* &tail){
    if(head==NULL && tail==NULL){
        Node* newnode=new Node(value);
        head=newnode;
        tail=newnode;
        return ;
    }
    else{
        //LL is not empty
        //step->1. create node
        Node* newnode=new Node(value);
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void Reverseprint(Node* tail){
    Node* temp=tail;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->prev;
    }
    cout<<"NULL"<<endl;

}
int getlength(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=0){
        count++;
        temp=temp->next;
    }
    return count;
}
void insertatposition(int position,int value,Node* &head,Node* &tail){
    if(position==1){
        insertathead(value,head,tail);
    }
   else if(position==getlength(head)+1){
        insertattail(value,head,tail);
    }
    else{
        Node* temp=head;
        for(int i=0;i<position-2;i++){
            temp=temp->next;
        }
        //create Node
        Node* newnode=new Node(value);
        Node* forward=temp->next;
        newnode->prev=temp;
        temp->next=newnode;
        forward->prev=newnode;
        newnode->next=forward;
    }

}
 bool searching (int target,Node* &head,Node* &tail){
    Node* temp=head;
    for(int i=0;i<getlength(head);i++){
        if(target==temp->data){
            cout<<target<<" found at index "<<i+1;
            return true;
        }
        else{
            temp=temp->next;
        }
    }
    return false;

 }
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertathead(10,head,tail);
    insertathead(20,head,tail);
    insertathead(30,head,tail);
    insertathead(40,head,tail);
    insertattail(34,head,tail);

    insertatposition(6,0,head,tail);
    print(head);
    searching(0,head,tail);
    //Reverseprint(tail);
    int length=getlength(head);
   // cout<<length;
    return 0;
}