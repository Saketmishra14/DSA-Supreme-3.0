#include<iostream>
#include<queue>
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
int getMin(Node* root){
    if(root==NULL) return -1;
    while(root->left!=NULL){

        root=root->left;
    }
        // reached root extreme left

    return root->data;
}
int getMax(Node* root){
    if(root==NULL) return -1;
    while(root->right!=NULL){
        root=root->right;
    }
        // reached root extreme right

    return root->data;
}
int main(){
     Node* root = createtree(root);
    cout<<"printing level order: "<<endl;
     levelOrderTraversal(root);
         cout<<"MIN element "<<getMin(root)<<endl;
    cout<<"MAX element "<<getMax(root)<<endl;


    return 0;
}