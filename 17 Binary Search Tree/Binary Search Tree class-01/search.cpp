#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

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
// O(logn) to insert a node

Node* buildBST(Node* &root,int val){
    if(root==NULL){
        root=new Node(val);
        return root;
    }
    else{
        if(val<root->data){
                        // val-> left subtree

            root->left=buildBST(root->left,val);
        }
        else{
                // val-> right subtree

            root->right=buildBST(root->right,val);
        }

    }
    return root;
}
Node* createtree(Node* &root){
    int val;
    cout<<"enter the Node value-:";
    cin>>val;
    while(val!=-1){
        root=buildBST(root,val);
     cout<<"enter the Node value-:";
     cin>>val;
    }
    
    return root;
}
void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* front = q.front();
        q.pop();
        if(front == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<< front->data << " ";
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
    }
} 
//pre-order traversal   LRN
void Preorder(Node* root){
    if(root==NULL) return ;
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}
//IN-order traversal  LNR
void InOrder(Node* root){
    if(root==NULL) return ;
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}
//Post-order traversal   LRN
void PostOrder(Node* root){
    if(root==NULL) return ;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

bool Searching(Node* root,int target){
    if(root==NULL) return false;
    if(root->data== target) return true;
    else if(target<root->data) {
       bool leftans= Searching(root->left,target);
       if(leftans==true) return true;
    }
    else{
       bool rightans= Searching(root->right,target);
       if(rightans==true) return true;
    }
    return false; 
}

int main(){
    Node* root=NULL;
    createtree(root);
    cout<<"printing level order traversal"<<endl;
    levelOrderTraversal(root);

    cout<<"pre-order traversal -:";
    Preorder(root);
    cout<<endl<<"In-order traversal -:";
    InOrder(root);
    cout<<endl<<"Post-order traversal -:";
    PostOrder(root);
    int target =200;
    bool searchans=Searching(root,target);
    cout<<searchans;
    return 0;;
}