#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data=val;
        left=NULL;
        right=NULL;
    }
};

   Node* CreateTree(){
        cout<<"Enter the Value for Node-:";
        int value;
        cin>>value;

        if(value==-1) return NULL;
        else{
            //root node
            Node* root=new Node(value);

            //left root recursive call
            root->left=CreateTree();

            //right root recursive call
            root->right=CreateTree();
            return root;
        }
    }

    void PreOrder(Node* root){
        if(root==NULL){
            return ;
        }

        //NLR
        //N
        cout<<root->data<<" ";
        //L
        PreOrder(root->left);
        //R
        PreOrder(root->right);
    }

    void InOrder(Node* root){
         if(root==NULL){
            return ;
        }
        //LNR
        //L
         PreOrder(root->left);
          //N
        cout<<root->data<<" ";
         //R
        PreOrder(root->right);

    }
    void PostOrder(Node* root){
        if(root==NULL) return ;

        //LRN
        //L
         PreOrder(root->left);
        //R
        PreOrder(root->right);
        //N
        cout<<root->data<<" ";

    }

    int main(){
    Node* root;
   root= CreateTree();
    cout<<root->data<<endl;
    PostOrder(root);
    return 0;
}