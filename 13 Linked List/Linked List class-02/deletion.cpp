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
int getlength(Node* &head){
    Node* temp=head;
    int count=0;
    while(temp!=0){
        count++;
        temp=temp->next;
    }
    return count;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
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
//deletion operation perform
void deleteatposition(int position,Node* &head,Node* &tail){
    //if linked list have no data
    int len=getlength(head);
    if(head==NULL && tail==NULL){
        cout<<"No node to delete"<<endl;
        return ;
    }
    //if linked list have one node
    if(head==tail){
        Node* temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
    }
    else if(len==position){
        Node* temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        temp->prev=NULL;
        delete temp;

    }
    else{
        //delete node other than head
        Node* temp=head;
        for(int i=0;i<position-2;i++){
            temp=temp->next;
        }
        Node* backward=temp;
        Node* curr=backward->next;
        Node* forward=curr->next;
        backward->next=forward;
        forward->prev=backward;
        curr->prev=NULL;
        curr->next=NULL;
        delete curr;

    }


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
    deleteatposition(2,head,tail);
    print(head);

    return 0;
}