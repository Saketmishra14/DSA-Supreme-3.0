#include<iostream>
#include<vector>
using namespace std;
class Node
{
public:
       int data;
       Node* next;

       //constructor 
       Node(int value){
        this->data=value;
        this->next=NULL;
       }   
};
Node* insertathead(int value,Node* &head,Node* &tail){
    if(head==NULL && tail==NULL){
        //step->1. create a new node
        Node* newnode=new Node(value);
        //step->2. head ko new node pai lga do 
        head =newnode;
        //step->3. tail ko new node pai lga do
        tail=newnode;
    }
    else{
        //LL is not empty
        //phle sai node present hai
        //insert at head
        //step->1. create a new node
        Node* newnode=new Node(value);
        //step->2. connect this newnode to head node
        newnode->next=head;
        //step->3. head update krdo
        head=newnode;
    }
    return head;

}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
Node* insertattail(int value,Node* &head,Node* &tail){
      if(head==NULL && tail==NULL){
        //step->1. create a new node
        Node* newnode=new Node(value);
      //step->2. head ko new node pai lga do 
        head =newnode;
        //step->3. tail ko new node pai lga do
        tail=newnode;
    }
    else{
                //step->1. create a new node
        Node* newnode=new Node(value);
        //step->2. 
        tail->next=newnode;
        //step->3 
        tail=newnode;
    }
return head;
}
int getlength(Node* head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
void Insertatposition(int value,Node* &head,int position,Node* &tail){
    if( position==1){
        //call insert at head function
      insertathead(value,head,tail);
    }
    else if(position==getlength(head)+1){
        //call tail function 
        insertattail(value,head,tail);
    }
    else{
        //kahi beach mai insert krna chahte ho 
        Node* temp=head;
        for(int i=1;i<position-1;i++){
            temp=temp->next;
        }
        Node* newnode=new Node(value);
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
bool searching(int target,Node* &head,Node* &tail){
    Node* temp=head;
    for(int i=0;i<getlength(head);i++){

    if(temp->data==target){
        return true;
    }
    else{
        temp=temp->next;
    }
}
  return false;
}
void deleteLL(int position,Node* &head,Node* &tail){
    //if linked list have no data
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
    else{
        //multiple nodes inside linked list
        if(position==1){
            Node* temp=head;
            head=temp->next;
            temp->next=NULL;
            delete temp;
        }
        else{
            //any except the first one
            Node* temp=head;
            for(int i=0;i<position-2;i++){
               temp= temp->next;
            }
            Node* todelete=temp->next;
            temp->next=todelete->next;
            todelete->next=NULL;
            delete todelete;
        }
    }

}

int main(){
    //stack
    Node* head=NULL;
    Node* tail=NULL;
    insertattail(120,head,tail);
    insertattail(130,head,tail);
    insertattail(10,head,tail);
    insertattail(160,head,tail);
   
    Insertatposition(40,head,1,tail);
     print(head);
     deleteLL(3,head,tail);
     print(head);

     if(searching(40,head,tail)==true){
        cout<<"target found";
     }
     else{
        cout<<"target not found";
     }
   // LL is empty
//    insertathead(10,head,tail);
     //10
//    insertathead(20,head,tail);
   //20->10
//    insertathead(30,head,tail);
   //30->20->10
//    print(head);
     

    //node first
    //dynamic memory
   // Node* first=new Node(10);
    return 0;
}